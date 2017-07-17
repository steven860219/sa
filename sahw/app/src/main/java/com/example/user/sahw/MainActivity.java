package com.example.user.sahw;

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

    public void hello(View v){
        EditText name = (EditText) findViewById(R.id.name);
        TextView txv = (TextView) findViewById(R.id.textView2);

        txv.setText(name.getText().toString() + ",您好!!");
    }

    public void clear(View v){
        TextView t = (TextView) findViewById(R.id .textView2);
        t.setText(" ");
    }
}
