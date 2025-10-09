class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        

        for(int i=0;i<9;i++){

            unordered_set<char> found;

            for(int j=0;j<9;j++){
                char current = board[i][j];
                if(current!='.'){
                    if(found.count(current)){
                        return false;
                    }
                    found.insert(current);
                }
            }


        }


         for(int i=0;i<9;i++){

            unordered_set<char> found;

            for(int j=0;j<9;j++){
                char current = board[j][i];
                if(current!='.'){
                    if(found.count(current)){
                        return false;
                    }
                    found.insert(current);
                }
            }


        }


         for(int i=0;i<3;i++){

            // unordered_set<char> found;

            for(int j=0;j<3;j++){
            
             unordered_set<char> found;

                for(int row=i*3;row<i*3+3;row++){


                    for(int col=j*3;col<j*3+3;col++){

                        char present = board[row][col];
                        if(present!='.'){
                            if(found.count(present)){
                                return false;
                            }

                            found.insert(present);
                        }

                    }



                }



            }


        }

        return true;



    }
};