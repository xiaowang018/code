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
