i,t,m,n,v[400],p[400],b[400][99];g(){for(v[m]=i=scanf("%s",b+m);p[m]=strcmp(b+i,b+m);i++);i<m||m++;}o(k){--v[k]||o(p[k])+puts(b+k);}main(q){for(gets(b);m||~scanf("%d",&n,m=1);n>0?g(),g(t=i),p[i]=t:--m?o(m):puts(""))--n||printf("Scenario #%d:\n",q++);}
