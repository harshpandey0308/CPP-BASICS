#include<iostream>
#include<cctype>
using namespace std;

#define MAX_TOKEN_LENGTH 100
#define MAX_TABLE_SIZE 50

class Tokenizer{
    private:
        typedef enum{
            KEYWORD,
            IDENTIFIER,
            OPERATOR,
            CONSTANT,
            SPECIAL_SYMBOL,
            STRING,
            CHARACTER,
        }TOKEN_TYPE;

        typedef struct{
            char source[MAX_TOKEN_LENGTH];
            TOKEN_TYPE type;
        }TOKEN;

        typedef struct{
            TOKEN table[MAX_TABLE_SIZE];
            int token_count;
        }TOKEN_TABLE;

    public:
        TOKEN_TABLE Table;
    
        Tokenizer(const char *code , int *n){
            Table.token_count = 0;
            for(int i=0 ; i<*n ; i++){
                if(isalpha(code[i])){
                    Table.table[Table.token_count].source[0] = code[i];
                    Table.table[Table.token_count].source[1] = '\0';
                    Table.table[Table.token_count].type = KEYWORD;
                    Table.token_count++;
                }
            }
        }

        void print_token(){
            for(int i=0 ; i<Table.token_count ; i++){
                cout<<"TOKEN -> "<<Table.table[i].source[0]<<"\n";
            }
        }
};

int main(){
    int n=7;
    Tokenizer t("a = b+c" , &n);
    t.print_token();

    return 0;
}