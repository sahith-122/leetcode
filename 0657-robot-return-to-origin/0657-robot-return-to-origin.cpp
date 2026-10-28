class Solution {
public:
    bool judgeCircle(string moves) {
        int count=0,count1=0;
     for(int i=0;i<moves.size();i++){
        if(moves[i]=='U' ){
            count++;
        }else if(moves[i]=='D'){
            count--;
        }
         if(moves[i]=='L' ){
            count1++;
        }else if(moves[i]=='R'){
            count1--;
        }
     }
     if(count==0 && count1==0) return true;
     else return false;
    }

};