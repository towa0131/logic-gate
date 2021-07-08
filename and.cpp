namespace basic {

    int AND(int x_1, int x_2) {
        double w_1, w_2, b, sum;
        w_1 = 0.5;
        w_2 = 0.5;
        b = -0.7;
        sum = x_1 * w_1 + x_2 * w_2 + b;

        if (sum <= 0) return 0;
        else return 1;
    }

}
