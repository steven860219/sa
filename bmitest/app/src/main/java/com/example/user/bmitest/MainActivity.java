package com.example.user.bmitest;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void calculate(View v)
    {

        EditText height = (EditText) findViewById(R.id.inheight);
        EditText weight = (EditText) findViewById(R.id.inweight);

        double bmih = Double.parseDouble(height.getText().toString());
        double bmiw = Double.parseDouble(weight.getText().toString());

        double resu = bmiw / (bmih*bmih);

        TextView result = (TextView) findViewById(R.id.result);
        result.setText("BMI = " + resu);

    }
}
