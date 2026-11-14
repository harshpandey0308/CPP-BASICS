#include<iostream>
#include<stdexcept>

using namespace std;

class Linked_List{
    private:
        class NODE{
            int value;
            NODE *next;

            friend class Linked_List;
            friend class Iterator;

            public:

                NODE(int val):value(val) , next(nullptr){}

                NODE(const NODE&) = delete;
    
                NODE& operator=(const NODE&) = delete;
        };

        

        NODE *root = NULL;

        NODE *_init_node(int value){
            NODE *new_node = new NODE(value);
            new_node->next = NULL;
            return new_node;
        }

        void deletion(NODE *current){
            NODE *temp = NULL;
            while(current != NULL){
                temp = current;
                current = current->next;
                delete temp;
            }

            current = nullptr;
        }

    public:
        Linked_List() = default;    

        Linked_List(const Linked_List&) = delete;

        Linked_List& operator=(const Linked_List&) = delete;


        class Iterator{
            private:
                NODE *current;

            public:
                Iterator(NODE *ptr) : current(ptr){}

                int& operator*(){
                    if(current == nullptr){
                        throw std::out_of_range("Invalid iterator access");
                    }
                    int& a = current->value;

                    return a;
                }

                Iterator& operator++(){
                    if(current == nullptr){
                        throw std::logic_error("Invalid access");
                    }

                    current = current->next;
                    return *this;
                }

                bool operator==(const Iterator& other) const{
                    if(this->current == other.current){
                        return true;
                    }

                    return false;
                }

                bool operator!=(const Iterator& other) const{
                    if(this->current != other.current){
                        return true;
                    }

                    return false;
                }
        };

        Iterator begin(){
            return Iterator(root);
        }

        Iterator end(){
            return Iterator(nullptr);
        }

        void insertion(int value){
            NODE *node = _init_node(value);

            if(root == NULL){
                root = node;
                return;
            }

            NODE *temp = root;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = node;

        }

        void display(){
            NODE *temp = root;
            while(temp != NULL){
                cout<<"value : "<<temp->value<<endl;
                temp = temp->next;
            }
        }

        ~Linked_List(){
            deletion(root);
            root = nullptr;
        }
};

int main(){
    Linked_List l1;

    l1.insertion(43);
    l1.insertion(50);
    l1.insertion(23);

    for(auto it = l1.begin() ; it != l1.end() ; ++it){
       cout<<*it<<endl;
    }

    l1.display();

    return 0;
}