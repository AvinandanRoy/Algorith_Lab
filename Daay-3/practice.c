int binarySearch(int a[], int l, int r, int search)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (a[m] > search)
            r = m -1 ;

        if (a[m] < search)
            l = m + 1;

        else
            return m ;
    }
    return -1;
}
int main()
{

    int element ;
    scanf("%d",&element);
    int a[element] ;
    for(int i = 0 ; i < element ; i++){
        scanf("%d", &a[i]);
    }
    int search ;
    scanf("%d",&search);
    int re = binarySearch(a , 0 , element-1  , search );
    if(re == -1 ){
        printf("No match");
    }

    else
        printf("%d", re);

}
