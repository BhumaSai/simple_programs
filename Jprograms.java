public class Jprograms{
    static void triangle(){
        int i,j,n=5,c_val=n;
        for(i=0;i<=n;i++){
            for(j=0;j<=c_val+i;j++){
                if(j>=n){
                    System.out.print('*');
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
            n-=1;
        }
    }
    static void right_angle_triangle(){
        int i,j,n=5;
        for(i=0;i<=n;i++){
            for(j=0;j<i;j++){
                System.out.print('*');
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        System.out.println("---triangle---\n");
        triangle();
        System.out.println("---right angle triangle---\n");
        right_angle_triangle();
    }
}