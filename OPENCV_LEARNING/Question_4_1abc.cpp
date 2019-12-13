#include <opencv2/opencv.hpp>
#include <iostream>
#include <chrono>

using namespace std;

const int display_height = 500;
const int display_weight = 500;

class Number
{
private:
    int value;

public:
    Number()
    {
        this->value = 0;
    }
    Number(int i)
    {
        this->value = i;
    }
    void setvalue(int i)
    {
        this->value = i;
    }
    void print(cv::Mat1b PrintMat)
    {
        switch (value)
        {
        case 0:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(2, i) = 255;
                PrintMat.at<unsigned char>(17, i) = 255;
            }
            for (int i = 3; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 2) = 255;
                PrintMat.at<unsigned char>(i, 7) = 255;
            }
            break;
        }
        case 1:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(17, i) = 255;
            }
            for (int i = 3; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 5) = 255;
            }
            PrintMat.at<unsigned char>(5, 2) = 255;
            PrintMat.at<unsigned char>(4, 3) = 255;
            PrintMat.at<unsigned char>(3, 4) = 255;
            PrintMat.at<unsigned char>(2, 5) = 255;
            break;
        }
        case 2:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(2, i) = 255;
                PrintMat.at<unsigned char>(9, i) = 255;
                PrintMat.at<unsigned char>(17, i) = 255;
            }
            for (int i = 3; i < 9; i++)
            {
                PrintMat.at<unsigned char>(i, 7) = 255;
            }
            for (int i = 10; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 2) = 255;
            }
            break;
        }
        case 3:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(2, i) = 255;
                PrintMat.at<unsigned char>(9, i) = 255;
                PrintMat.at<unsigned char>(17, i) = 255;
            }
            for (int i = 3; i < 9; i++)
            {
                PrintMat.at<unsigned char>(i, 7) = 255;
            }
            for (int i = 10; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 7) = 255;
            }
            break;
        }
        case 4:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(10, i) = 255;
            }
            for (int i = 2; i < 18; i++)
            {
                PrintMat.at<unsigned char>(i, 5) = 255;
            }
            PrintMat.at<unsigned char>(4, 4) = 255;
            PrintMat.at<unsigned char>(5, 4) = 255;
            PrintMat.at<unsigned char>(6, 3) = 255;
            PrintMat.at<unsigned char>(7, 3) = 255;
            PrintMat.at<unsigned char>(8, 3) = 255;
            PrintMat.at<unsigned char>(9, 2) = 255;
            PrintMat.at<unsigned char>(10, 2) = 255;
            break;
        }
        case 5:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(2, i) = 255;
                PrintMat.at<unsigned char>(9, i) = 255;
                PrintMat.at<unsigned char>(17, i) = 255;
            }
            for (int i = 3; i < 9; i++)
            {
                PrintMat.at<unsigned char>(i, 2) = 255;
            }
            for (int i = 10; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 7) = 255;
            }
            break;
        }
        case 6:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(2, i) = 255;
                PrintMat.at<unsigned char>(9, i) = 255;
                PrintMat.at<unsigned char>(17, i) = 255;
            }
            for (int i = 3; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 2) = 255;
            }
            for (int i = 10; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 7) = 255;
            }
            break;
        }
        case 7:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(2, i) = 255;
            }
            for (int i = 3; i < 6; i++)
            {
                PrintMat.at<unsigned char>(i, 7) = 255;
            }
            for (int i = 6; i < 10; i++)
            {
                PrintMat.at<unsigned char>(i, 6) = 255;
            }
            for (int i = 10; i < 14; i++)
            {
                PrintMat.at<unsigned char>(i, 5) = 255;
            }
            for (int i = 14; i < 18; i++)
            {
                PrintMat.at<unsigned char>(i, 4) = 255;
            }
            break;
        }
        case 8:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(2, i) = 255;
                PrintMat.at<unsigned char>(9, i) = 255;
                PrintMat.at<unsigned char>(17, i) = 255;
            }
            for (int i = 3; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 2) = 255;
            }
            for (int i = 3; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 7) = 255;
            }
            break;
        }
        case 9:
        {
            for (int i = 2; i < 8; i++)
            {
                PrintMat.at<unsigned char>(2, i) = 255;
                PrintMat.at<unsigned char>(9, i) = 255;
                PrintMat.at<unsigned char>(17, i) = 255;
            }
            for (int i = 3; i < 17; i++)
            {
                PrintMat.at<unsigned char>(i, 7) = 255;
            }
            for (int i = 3; i < 10; i++)
            {
                PrintMat.at<unsigned char>(i, 2) = 255;
            }
            break;
        }
        case 10:
        {
            PrintMat.setTo(0);
            break;
        }
        default:
        {
            cout << "Please Input the number!";
        }
        }
    }
};

void help()
{
    cout << "Please Input numbeer'0'-'9', and other keys will quit" << endl;
}

void locate(cv::Mat1b PrintMat)
{
    for (int i = 2; i < 8; i++)
    {
        PrintMat.at<unsigned char>(19, i) = 125;
    }
}

void locate_clear(cv::Mat1b PrintMat)
{
    for (int i = 2; i < 8; i++)
    {
        PrintMat.at<unsigned char>(19, i) = 0;
    }
}

vector<Number> numbers;

int main()
{
    //init numbers and display
    help();
    unsigned count = 0;
    unsigned hang = 0;
    unsigned lie = 0;
    cv::Mat1b display = cv::Mat1b::zeros(display_height, display_weight);
    cv::Mat1b print = cv::Mat1b::zeros(20, 10);
    //找到指向需要修改区域数据的左上角位置,返回其头指针
    //display.ptr<cv::Mat1b>(hang,lie);

    //以下方式,并不会创造一个新矩阵,而回让print指向目标位置
    print = display.rowRange(0 + 20 * hang, 20 + 20 * hang).colRange(0 + 10 * lie, 10 + 10 * lie);
    locate(print);
    Number *number = new Number();

    //show the empty image
    cv::namedWindow("Typewriter", cv::WINDOW_AUTOSIZE);
    cv::imshow("Typewriter", display);

    //loop for input
    int c = cv::waitKey(0);
    do
    {
        if ((char)c == 13)
        {
            hang++;
            lie = 0;
        }
        else if ((char)c == 8)
        {
            locate_clear(print);
            count--;
            int tmp = lie;
            if (tmp > 0)
                lie--;
            else if (tmp == 0)
            {
                hang--;
                lie = 49;
            }
            cout << "hang:" << hang << "lie:" << lie << endl;
            print = display.rowRange(0 + 20 * hang, 20 + 20 * hang).colRange(0 + 10 * lie, 10 + 10 * lie);
            number->setvalue(10);
            number->print(print);
            locate(print);
        }
        //箭头编辑每一个数字
        //w
        else if (c == 87 || c == 119)
        {
            locate_clear(print);
            if (hang > 0)
            {
                hang--;
            }
            print = display.rowRange(0 + 20 * hang, 20 + 20 * hang).colRange(0 + 10 * lie, 10 + 10 * lie);
            locate(print);
        }
        //a
        else if (c == 65 || c == 97)
        {
            locate_clear(print);
            if (lie > 0)
            {
                lie--;
            }
            else
            {
                if (hang > 0)
                {
                    hang--;
                    lie = 49;
                }
            }
            print = display.rowRange(0 + 20 * hang, 20 + 20 * hang).colRange(0 + 10 * lie, 10 + 10 * lie);
            locate(print);
        }
        //s
        else if (c == 83 || c == 115)
        {
            locate_clear(print);
            if (hang < 24)
            {
                hang++;
            }
            print = display.rowRange(0 + 20 * hang, 20 + 20 * hang).colRange(0 + 10 * lie, 10 + 10 * lie);
            locate(print);
        }
        //d
        else if (c == 68 || c == 100)
        {
            locate_clear(print);
            if (lie < 49)
            {
                lie++;
            }
            else
            {
                hang++;
                lie = 0;
            }
            print = display.rowRange(0 + 20 * hang, 20 + 20 * hang).colRange(0 + 10 * lie, 10 + 10 * lie);
            locate(print);
        }
        //=
        else if (c == 61)
        {
        }
        //ESC退出
        else if (c == 27)
        {
            break;
        }
        else if(c == 48||c == 49||c == 50||c == 51||c == 52||c == 53||c == 54||c == 55||c == 56||c == 57)
        {
            locate_clear(print);
            cout << "number input" << endl;
            number->setvalue(c - '0');
            number->print(print);
            count++;
            if(lie < 49){
                lie++;
            }
            else{
                if(hang<24){
                    hang++;
                    lie = 0;
                }
                else{
                    break;
                }
            }
            print = display.rowRange(0 + 20 * hang, 20 + 20 * hang).colRange(0 + 10 * lie, 10 + 10 * lie);
            locate(print);
        }
        else{
            cout << "Please Input the number!";
        }
        cout << (char)c << endl;
        cv::imshow("Typewriter", display);
        c = cv::waitKey(0);
    } while (true);
    
    //cv::waitKey(0);
    return 0;
}
