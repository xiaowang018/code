    int ages[]={23,43,12,89,2};
    char * names[]={"Alan","Frank","Mary","John","Lisa"};
    int count=sizeof(ages);
    int i=0;
    for(i=0;i<count;i++){
        printf("%s has %d years alive.\n",names[i],ages[i]);
    }
        printf("----\n");

    int * cur_age=ages;
    char ** cur_name=names;
    for(i=0;i<count;i++)
        {
        printf("%s is %d years old.\n",*(cur_name+i),*(cur_age+i));
        }
 int oldprice,price=0,i=0;
//    printf("%d",&oldprice);
    scanf("%d",&oldprice);
    printf("请输入价格:\n");

    while (oldprice!=price) {
        i++;
        printf("参与者:");
        scanf("%d",&price);
        printf("主持人:");
        if (price > oldprice) {
            printf("高了\n");

        } else if (price < oldprice) {
            printf("低了\n");
        } else {
            printf("恭喜");
        }
    }
