
#include "pointh.h"

Point PD,PY,PA,PR,PS,PAA;
int main()
{

    PD=MakePoint(2.0,2.0);
    PY=MakePoint(-2.0,1.0);
    PA=MakePoint(2.0,-2.0);
    PR=MakePoint(-2.0,-2.0);

    printf("\nPoint dari PD : ");Tulis(PD);
    printf("\nPoint dari PY : ");Tulis(PY);
    printf("\nPoint dari PA : ");Tulis(PA);
    printf("\nPoint dari PR : ");Tulis(PR);
    printf("\n");
    //BacaPoint(&PS);
    //Tulis(PS);
    printf("\n\n");
    printf("GetAbsis PA : %0.2f\n",GetAbsis(PA));
    printf("GetOrdinat PA: %0.2f\n",GetOrdinat(PA));
    SetAbsis(&PA,4.0);SetOrdinat(&PA,4.0);
    printf("PA stlh diset 4,4 : ");Tulis(PA);
    printf("\n");
    PS=MakePoint(-2,2);
    printf("\nPoint dari PS : ");Tulis(PS);
    SetAbsis(&PS,4.0);SetOrdinat(&PS,3.0);
    printf("\n");
    printf("PS stlh diset 4,3: ");Tulis(PS);

    printf("\nHasil dari PD+PY : ");Tulis(Plus(PD,PY));
    printf("\nHasil dari PD-PY : ");Tulis(Minus(PD,PY));
    printf("\nHasil dari PD.PY(dot Product) : ");Tulis(Product(PD,PY));
    printf("\nHasil dari PD*PY(cross Product) : ");Tulis(Multi(PD,PY));
    PAA=MakePoint(2.0,2.0);
    printf("\nPoint dari PAA : ");Tulis(PAA);
    printf("\nEqual PD PAA ? %s\n",EQ(PD,PAA)?"Ya":"Tidak");
    printf("Not Equal PD PY ? %s\n",NEQ(PD,PY)?"Ya":"Tidak");
    printf("Less  PD PY ? %s\n",LT(PD,PY)?"Ya":"Tidak");
    printf("Great PD PY ? %s\n",GT(PD,PY)?"Ya":"Tidak");
    SetAbsis(&PAA,0);SetOrdinat(&PAA,0);
    printf("\nPAA stlh diset 0,0 : ");Tulis(PAA);
    printf("\nOrigin  PD ? %s\n",IsOrigin(PAA)?"Ya":"Tidak");
    SetAbsis(&PAA,2);SetOrdinat(&PAA,0);
    printf("\nPAA stlh diset 2,0 : ");Tulis(PAA);

    printf("\nIsOnSbX PAA ? %s\n",IsOnSbX(PAA)?"Ya":"Tidak");
    printf("IsOnSbY PAA ? %s\n",IsOnSbY(PAA)?"Ya":"Tidak");
    printf("\nPD Kuadran Ke : %d\n",Kuadran(PD));
    printf("PY Kuadran Ke : %d\n",Kuadran(PY));
    printf("PA Kuadran Ke : %d\n",Kuadran(PA));
    printf("PR Kuadran Ke : %d\n",Kuadran(PR));
    printf("PS Kuadran Ke : %d\n",Kuadran(PS));
    printf("PAA Kuadran Ke : %d\n",Kuadran(PAA));
    printf("\nNextX PD       : "),Tulis(NextX(PD));
    printf("\nNextY PY       : "),Tulis(NextY(PY));
    printf("\nPlusDelta PA (2,2): "),Tulis(PlusDelta(PA,2,2));

    printf("\nJarak Titik PD Ke 0 : %0.2f\n",Jarak0(PD));
    printf("\nPanjang Titik PD Ke Titik PY : %0.2f\n",Panjang(PD,PY));
    Geser(&PD,2,3);
    printf("\nGeser PD (2,3)  : "),Tulis(PD);
    GeserKeSbX(&PY);
    printf("\nGeser PY SbX   : "),Tulis(PY);
    GeserKeSbY(&PA);
    printf("\nGeser PA SbY   : "),Tulis(PA);
    printf("\nPR sblm Di Mirror SBX: ");Tulis(PR);
    Mirror(&PR,true,false) ;
    printf("\nMirror  PR SbX   : "),Tulis(PR);
    printf("\nPR sblm Di Mirror SBY: ");Tulis(PR);
    Mirror(&PR,false,true);
    printf("\nMirror  PR SbY   : "),Tulis(PR);
    printf("\nPS sblm rot 180 CCW: ");Tulis(PS);
    Putar(&PS,180.0);
    printf("\nPS stlh rot 180 CCW: ");Tulis(PS);
    Putar(&PS,-180.0);
    printf("\nPS stlh rot -180 CCW: ");Tulis(PS);

    printf("\n\n");



    return 0;
}
