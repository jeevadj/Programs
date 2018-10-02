import java.util.*;
import java.io.*;
public class obstacle {
    public static ArrayList<Integer> indexI = new ArrayList<>();
    public static ArrayList<Integer> indexJ = new ArrayList<>();
    public static int index =0;
    public static int visited[][] = new int[20][20];
    public static ArrayList<Character> Route(char s[][],int i,int j,ArrayList<Character> obstacles,int n){
             if(i!=0&&j!=0&&s[i-1][j-1]!='R'&&s[i-1][j-1]!='A'&&s[i-1][j-1]!='D'&&s[i-1][j-1]!='M')
                 obstacles.add(s[i-1][j-1]);
             if(i!=0&&s[i-1][j]!='R'&&s[i-1][j]!='A'&&s[i-1][j]!='D'&&s[i-1][j]!='M')
                 obstacles.add(s[i-1][j]);
             if(i!=0&&j<n-1&&s[i-1][j+1]!='R'&&s[i-1][j+1]!='A'&&s[i-1][j+1]!='D'&&s[i-1][j+1]!='M')
                 obstacles.add(s[i-1][j+1]);
             if(j!=0&&s[i][j-1]!='R'&&s[i][j-1]!='A'&&s[i][j-1]!='D'&&s[i][j-1]!='M')
                 obstacles.add(s[i][j-1]);
             if(j<n-1&&s[i][j+1]!='R'&&s[i][j+1]!='A'&&s[i][j+1]!='D'&&s[i][j+1]!='M')
                 obstacles.add(s[i][j+1]);
             if(i<n-1&&j!=0&&s[i+1][j-1]!='R'&&s[i+1][j-1]!='A'&&s[i+1][j-1]!='D'&&s[i+1][j-1]!='M')
                 obstacles.add(s[i+1][j-1]);
             if(i<n-1&&s[i+1][j]!='R'&&s[i+1][j]!='A'&&s[i+1][j]!='D'&&s[i+1][j]!='M')
                 obstacles.add(s[i+1][j]);
             if(i<n-1&&j<n-1&&s[i+1][j+1]!='R'&&s[i+1][j+1]!='A'&&s[i+1][j+1]!='D'&&s[i+1][j+1]!='M')
                 obstacles.add(s[i+1][j+1]);
             
           Collections.sort(obstacles);
          return obstacles;    
                 
    }
    public static void FindRoute(char s[][],int i, int j,int n,int in){
           if(i!=0&&j!=0&&s[i-1][j-1]=='R'&&visited[i-1][j-1]==1){
               indexI.add(index,i-1);
               indexJ.add(index,j-1);
               visited[i-1][j-1]=0;
               index++;
           }
           if(i!=0&&s[i-1][j]=='R'&&visited[i-1][j]==1){
               indexI.add(index,i-1);
               indexJ.add(index,j);
               visited[i-1][j]=0;
               index++;
           }
           if(i!=0&&j<n-1&&s[i-1][j+1]=='R'&&visited[i-1][j+1]==1){
               indexI.add(index,i-1);
               indexJ.add(index,j+1);
               visited[i-1][j+1]=0;
               index++;
           }
           if(j!=0&&s[i][j-1]=='R'&&visited[i][j-1]==1){
               indexI.add(index,i);
               indexJ.add(index,j-1);
               visited[i][j-1]=0;
               index++;
           }
           if(j<n-1&&s[i][j+1]=='R'&&visited[i][j+1]==1){
               indexI.add(index,i);
               indexJ.add(index,j+1);
               visited[i][j+1]=0;
               index++;
           }
           if(i<n-1&&j!=0&&s[i+1][j-1]=='R'&&visited[i+1][j-1]==1){
               indexI.add(index,i+1);
               indexJ.add(index,j-1);
               visited[i+1][j-1]=0;
               index++;
           }
           if(i<n-1&&s[i+1][j]=='R'&&visited[i+1][j]==1){
               indexI.add(index,i+1);
               indexJ.add(index,j);
               visited[i+1][j]=0;
               index++;
           }
           if(i<n-1&&j<n-1&&s[i+1][j+1]=='R'&&visited[i+1][j+1]==1){
               indexI.add(index,i+1);
               indexJ.add(index,j+1);
               visited[i+1][j+1]=0;
               index++;
           }
              if(indexI.size()!=(n*n)&&in != indexI.size())
                FindRoute(s,indexI.get(in),indexJ.get(in),n,++in);
          
           
           
               
    }
    public static void main(String arr[])throws IOException{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bf.readLine());
        ArrayList<Character> tempobstacles = new ArrayList<>();
        int i,j;
        String str[] = new String[n];
        i=0;
        while(i<n){
            str[i] = bf.readLine();
            i = i+1;
        }
        char temp[][] = new char[n][n];
        for(i=0;i<n;i++){
            int k=0;
            for(j=0;j<str[i].length();j++){
                if(str[i].charAt(j)!=' ')
                    temp[i][k++]=str[i].charAt(j);
                if(str[i].charAt(j)=='R')
                    visited[i][k-1]=1;
            }
        }
        
        FindRoute(temp,0,0,n,0);
        for(i=0;i<indexI.size();i++){
            ArrayList<Character> tempList = Route(temp,indexI.get(i),indexJ.get(i),tempobstacles,n);
            if(tempList.isEmpty()){
               System.out.print("NO HURDLES "); 
            }else{
            for(int ctr=0;ctr<tempList.size();ctr++)
                System.out.print(tempList.get(ctr)+" ");
            tempobstacles.clear();
        }
        }
        System.out.print("DESTINATION");
                
        
        
    }
    
}
