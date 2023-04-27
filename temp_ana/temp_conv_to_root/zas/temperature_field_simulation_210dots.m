load dots;

n=210;
    % 共210个点
m=16;
    % 其中有16个点的温度T已知
N=10;
    % 16进制化
x=dots(:,1);
y=dots(:,2); 

for i=1:n
    x(i)=x(i)+5000;
    y(i)=y(i)+5000;
end
    
W=zeros(1,n);
S=zeros(1,n);
    % W、S均为n*n的0矩阵，W为温度场
X=[1559,-4181,3543,-871,-4090,-20,-2372,2328,1113,-1982,3976,-4200,-4185,4170,-1854,2097];
Y=[1354,1342,439,516,-318,-290,-1359,-1328,-2129,-2985,-3995,-3996,4006,4017,2783,2769];

for i=1:m
    X(i)=X(i)+5000;
    Y(i)=Y(i)+5000;
end
% 将X、Y的分布由（-5000，5000）调整为（0，10000）

T(X(1),Y(1))=27.6094;
T(X(2),Y(2))=26.7656;
T(X(3),Y(3))=27.375;
T(X(4),Y(4))=27.2578;
T(X(5),Y(5))=26.6797;
T(X(6),Y(6))=27.3438;
T(X(7),Y(7))=27.8438;
T(X(8),Y(8))=28.2422;
T(X(9),Y(9))=28.0625;
T(X(10),Y(10))=27.5625;
T(X(11),Y(11))=26.7813;
T(X(12),Y(12))=26.3359;
T(X(13),Y(13))=27.375;
T(X(14),Y(14))=27.5938;
T(X(15),Y(15))=27.9688;
T(X(16),Y(16))=28.1797;

F=zeros(n);
G=zeros(n);
L=zeros(m,n);
A=zeros(1,n);
h=zeros(m,n);
Hh=zeros(m,n);% 权重系数

for z=1:m
    F=(x-X(z)).^2;
    G=(y-Y(z)).^2;
    L(z,:)=(F+G).^(1/2);
end


for z=1:m
    A=L(z,:);
    S=S+A;
end
S(isnan(S))=0;

for z=1:m
    A=L(z,:);
    h(z,:)=S./A;
end
h(isnan(h))=0;

H=zeros(1,n);
for z=1:m
    A=h(z,:);
    H=H+A;
end
H(1,n-1)


for z=1:m
    Hh(z,:)=h(z,:)./H;
end
Hh;
Hh1=floor(Hh*2^N);
Hh16=dec2hex(Hh1);

for i=1:n
    for j=1:m
        Hh16char(j,i)={Hh16((i-1)*m+j,:)};
    end
end


for i=1:n
    for z=1:m
        w(z,i)=T(X(z),Y(z))*Hh(z,i);
         	if isnan(w(z,i))==1
            	 w(z,i)=0;
            end
    	W(i)=w(z,i)+ W(i);
    end
end
W16=dec2hex(floor(W*2^N));
for i=1:n
        W16char(i)={W16(i,:)};
end

% text=zeros(3,n);
% for i=1:n
%        text(1,i)=x(i);
%        text(2,i)=y(i);
%        text(3,i)=W(i);
% end


scatter3(x,y,W);
% heatmap(W)

load('mapTop.mat');

for i=1:5
    for j=1:42
        order = mapTop(i,j)+1;
        sipm_co(order,:) = Hh16char(:,5*(i-1)+j)';
    end
end

fid = fopen('co_mat_orderchange.txt','w');

for i=1:210
    for j=1:16
        fprintf(fid,'%s\n',sipm_co{i,j});
    end
end

fclose(fid);
