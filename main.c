double zelva_zajic(double x0){
    double zelva = newton(x0);
    double zajic = newton(newton(x0));

    while(zelva != zajic){
        zelva = newton(zelva);
        zajic = newton(newton(zajic));
    }

    return zelva;
}
