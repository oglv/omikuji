#include <fstream> //殴り書きのため後々コードの単純化と可読性の向上を図る
#include <iostream>
#include "omikuji.hpp"
using namespace std;
int main()
{
    ofstream writing_file;
    string filename = "omikuji.txt";
    writing_file.open(filename, ios::out);
    //書き込み部
    int count = 0;
    writing_file << "#####################" << endl;
    writing_file << endl;

    //大吉の処理開始

    for(int j = 0; j < 43; j++) //jは大吉
    {
        count++;
        int gan = rnd(1,11);//ganは願望
        int ren = rnd(1,11);//renは恋愛
        int gak = rnd(1,11);//gakは学問
        int ryo = rnd(1,11);//ryoは旅行
        int byo = rnd(1,11);//byoは病気
        writing_file << count << endl;
        writing_file << endl;

        writing_file << "大吉\n\n心静かに過ごすべし\n流れに身を任せれば\n全て吉報へ向かう\n\n" << endl;

        //願望の処理開始
{
        writing_file << "願望 ";
        if (gan ==1)
        {
            writing_file << "多く望まなければ、叶う" << endl;
        }
        if (gan ==2)
        {
            writing_file << "かなう" << endl;
        }
        if (gan ==3)
        {
            writing_file << "早めが吉" << endl;
        }
        if (gan ==4)
        {
            writing_file << "遅いがいずれかなう" << endl;
        }
        if (gan ==5)
        {
            writing_file << "その時に備えよ" << endl;
        }
        if (gan ==6)
        {
            writing_file << "祈れ" << endl;
        }
        if (gan ==7)
        {
            writing_file << "困難に立ち向かえ" << endl;
        }
        if (gan ==8)
        {
            writing_file << "絵馬にいのれ" << endl;
        }
        if (gan ==9)
        {
            writing_file << "行動を改めよ" << endl;
        }
        if (gan ==10)
        {
            writing_file << "言うことなし" << endl;
        }
        if (gan ==11)
        {
            writing_file << "現状維持" << endl;
        }
}
        //願望の処理終了

        //恋愛の処理開始
{
        writing_file << "恋愛 ";
        if (ren ==1)
        {
            writing_file << "迷うことなかれ 心に決めた人が最上" << endl;
        }
        if (ren ==2)
        {
            writing_file << "急ぐべからず" << endl;
        }
        if (ren ==3)
        {
            writing_file << "行動するべし" << endl;
        }
        if (ren ==4)
        {
            writing_file << "浮気に気をつけよう" << endl;
        }
        if (ren ==5)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ren ==6)
        {
            writing_file << "勇気を出そう" << endl;
        }
        if (ren ==7)
        {
            writing_file << "ミサンガが吉" << endl;
        }
        if (ren ==8)
        {
            writing_file << "3Aに来るのが吉" << endl;
        }
        if (ren ==9)
        {
            writing_file << "今はその時ではない" << endl;
        }
        if (ren ==10)
        {
            writing_file << "デートに誘うべし" << endl;
        }
        if (ren ==11)
        {
            writing_file << "祈れ" << endl;
        }
}
        //恋愛の処理終了

        //学問の処理開始
{
        writing_file << "学問 ";
        if (gak ==1)
        {
            writing_file << "努力しただけ 力になる" << endl;
        }
        if (gak ==2)
        {
            writing_file << "うまくいく" << endl;
        }
        if (gak ==3)
        {
            writing_file << "あわてるな、まだその時じゃない" << endl;
        }
        if (gak ==4)
        {
            writing_file << "2は取らないだろう" << endl;
        }
        if (gak ==5)
        {
            writing_file << "試験のヤマあたる" << endl;
        }
        if (gak ==6)
        {
            writing_file << "卒研がさだまらない" << endl;
        }
        if (gak ==7)
        {
            writing_file << "T-GAP、アポ取りの危機" << endl;
        }
        if (gak ==8)
        {
            writing_file << "5が増える" << endl;
        }
        if (gak ==9)
        {
            writing_file << "もう一回遊べるドン" << endl;
        }
        if (gak ==10)
        {
            writing_file << "剽窃ばれる" << endl;
        }
        if (gak ==11)
        {
            writing_file << "努力が吉" << endl;
        }
}
        //学問の処理終了

        //旅行の処理開始
{
        writing_file << "旅行 ";
        if (ryo == 1)
        {
            writing_file << "上を目指せ" << endl;
        }
        if (ryo ==2)
        {
            writing_file << "道中に難あり" << endl;
        }
        if (ryo ==3)
        {
            writing_file << "快調に進む" << endl;
        }
        if (ryo ==4)
        {
            writing_file << "恋人といけ" << endl;
        }
        if (ryo ==5)
        {
            writing_file << "帰るまでが旅行" << endl;
        }
        if (ryo ==6)
        {
            writing_file << "留学に行ってみよう" << endl;
        }
        if (ryo ==7)
        {
            writing_file << "待ち人と出会う" << endl;
        }
        if (ryo ==8)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ryo ==9)
        {
            writing_file << "南南東にむかえ" << endl;
        }
        if (ryo ==10)
        {
            writing_file << "右に行け" << endl;
        }
        if (ryo ==11)
        {
            writing_file << "今はまて" << endl;
        }
}
        //旅行の処理終了

        //病気の処理開始
{
        writing_file << "病気 ";
        if (byo == 1)
        {
            writing_file << "気になる箇所は早めに医師に診せろ" << endl;
        }
        if (byo == 2)
        {
            writing_file << "風邪をひくかも健康には気を付けて" << endl;
        }
        if (byo == 3)
        {
            writing_file << "健康に過ごせるでしょう" << endl;
        }
        if (byo == 4)
        {
            writing_file << "手洗いうがいしよう" << endl;
        }
        if (byo == 5)
        {
            writing_file << "難は去った" << endl;
        }
        if (byo == 6)
        {
            writing_file << "ネギが吉" << endl;
        }
        if (byo == 7)
        {
            writing_file << "消毒が吉" << endl;
        }
        if (byo == 8)
        {
            writing_file << "ご飯をちゃんと食べよう" << endl;
        }
        if (byo == 9)
        {
            writing_file << "早寝早起き" << endl;
        }
        if (byo == 10)
        {
            writing_file << "自分の体と向き合おう" << endl;
        }
        if (byo == 11)
        {
            writing_file << "健康診断に行くのがよろし" << endl;
        }
}
        //病気の処理終了

        writing_file << endl;
        writing_file << "#####################" << endl;
        writing_file << endl;
    }
    writing_file << endl;

    //大吉の処理終了

    //吉の処理開始

    for(int k = 0; k < 44; k++)//kは吉
    {
        count++;
        int gan = rnd(1,11);//ganは願望
        int ren = rnd(1,11);//renは恋愛
        int gak = rnd(1,11);//gakは学問
        int ryo = rnd(1,11);//ryoは旅行
        int byo = rnd(1,11);//byoは病気
        writing_file << count << endl;
        writing_file << endl;

        writing_file << "吉\n\n明るい光が射し\n何かが芽生える\n兆しあり\n新しいことを\n始めるといいでしょう\n" << endl;

        //願望の処理開始
{
        writing_file << "願望 ";
        if (gan ==1)
        {
            writing_file << "焦ることなかれ 機は来る" << endl;
        }
        if (gan ==2)
        {
            writing_file << "かなう" << endl;
        }
        if (gan ==3)
        {
            writing_file << "早めが吉" << endl;
        }
        if (gan ==4)
        {
            writing_file << "遅いがいずれかなう" << endl;
        }
        if (gan ==5)
        {
            writing_file << "その時に備えよ" << endl;
        }
        if (gan ==6)
        {
            writing_file << "祈れ" << endl;
        }
        if (gan ==7)
        {
            writing_file << "困難に立ち向かえ" << endl;
        }
        if (gan ==8)
        {
            writing_file << "絵馬にいのれ" << endl;
        }
        if (gan ==9)
        {
            writing_file << "行動を改めよ" << endl;
        }
        if (gan ==10)
        {
            writing_file << "言うことなし" << endl;
        }
        if (gan ==11)
        {
            writing_file << "現状維持" << endl;
        }
}
        //願望の処理終了

        //恋愛の処理開始
{
        writing_file << "恋愛 ";
        if (ren ==1)
        {
            writing_file << "年齢などにとらわれる必要なし" << endl;
        }
        if (ren ==2)
        {
            writing_file << "急ぐべからず" << endl;
        }
        if (ren ==3)
        {
            writing_file << "行動するべし" << endl;
        }
        if (ren ==4)
        {
            writing_file << "浮気に気をつけよう" << endl;
        }
        if (ren ==5)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ren ==6)
        {
            writing_file << "勇気を出そう" << endl;
        }
        if (ren ==7)
        {
            writing_file << "ミサンガが吉" << endl;
        }
        if (ren ==8)
        {
            writing_file << "3Aに来るのが吉" << endl;
        }
        if (ren ==9)
        {
            writing_file << "今はその時ではない" << endl;
        }
        if (ren ==10)
        {
            writing_file << "デートに誘うべし" << endl;
        }
        if (ren ==11)
        {
            writing_file << "祈れ" << endl;
        }
}
        //恋愛の処理終了

        //学問の処理開始
{
        writing_file << "学問 ";
        if (gak ==1)
        {
            writing_file << "伸びる時期 努力せよ" << endl;
        }
        if (gak ==2)
        {
            writing_file << "うまくいく" << endl;
        }
        if (gak ==3)
        {
            writing_file << "あわてるな、まだその時じゃない" << endl;
        }
        if (gak ==4)
        {
            writing_file << "2は取らないだろう" << endl;
        }
        if (gak ==5)
        {
            writing_file << "試験のヤマあたる" << endl;
        }
        if (gak ==6)
        {
            writing_file << "卒研がさだまらない" << endl;
        }
        if (gak ==7)
        {
            writing_file << "T-GAP、アポ取りの危機" << endl;
        }
        if (gak ==8)
        {
            writing_file << "5が増える" << endl;
        }
        if (gak ==9)
        {
            writing_file << "もう一回遊べるドン" << endl;
        }
        if (gak ==10)
        {
            writing_file << "剽窃ばれる" << endl;
        }
        if (gak ==11)
        {
            writing_file << "努力が吉" << endl;
        }
}
        //学問の処理終了

        //旅行の処理開始
{
        writing_file << "旅行 ";
        if (ryo ==1)
        {
            writing_file << "海外に行け" << endl;
        }
        if (ryo ==2)
        {
            writing_file << "道中に難あり" << endl;
        }
        if (ryo ==3)
        {
            writing_file << "快調に進む" << endl;
        }
        if (ryo ==4)
        {
            writing_file << "恋人といけ" << endl;
        }
        if (ryo ==5)
        {
            writing_file << "帰るまでが旅行" << endl;
        }
        if (ryo ==6)
        {
            writing_file << "留学に行ってみよう" << endl;
        }
        if (ryo ==7)
        {
            writing_file << "待ち人と出会う" << endl;
        }
        if (ryo ==8)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ryo ==9)
        {
            writing_file << "南南東にむかえ" << endl;
        }
        if (ryo ==10)
        {
            writing_file << "右に行け" << endl;
        }
        if (ryo ==11)
        {
            writing_file << "今はまて" << endl;
        }
}
        //旅行の処理終了

        //病気の処理開始
{
        writing_file << "病気 ";
        if (byo ==1)
        {
            writing_file << "異変を感じたら迷わず休め" << endl;
        }
        if (byo ==2)
        {
            writing_file << "風邪をひくかも健康には気を付けて" << endl;
        }
        if (byo ==3)
        {
            writing_file << "健康に過ごせるでしょう" << endl;
        }
        if (byo ==4)
        {
            writing_file << "手洗いうがいしよう" << endl;
        }
        if (byo ==5)
        {
            writing_file << "難は去った" << endl;
        }
        if (byo ==6)
        {
            writing_file << "ネギが吉" << endl;
        }
        if (byo ==7)
        {
            writing_file << "消毒が吉" << endl;
        }
        if (byo ==8)
        {
            writing_file << "ご飯をちゃんと食べよう" << endl;
        }
        if (byo ==9)
        {
            writing_file << "早寝早起き" << endl;
        }
        if (byo ==10)
        {
            writing_file << "自分の体と向き合おう" << endl;
        }
        if (byo ==11)
        {
            writing_file << "健康診断に行くのがよろし" << endl;
        }
}
        //病気の処理終了
        writing_file << endl;
        writing_file << "#####################" << endl;
        writing_file << endl;
    }
        writing_file << endl;

    //吉の処理終了

    //中吉の処理開始
    for(int l = 0; l < 22; l++)//l は中吉
    {
        count++;
        int gan = rnd(1,11);//ganは願望
        int ren = rnd(1,11);//renは恋愛
        int gak = rnd(1,11);//gakは学問
        int ryo = rnd(1,11);//ryoは旅行
        int byo = rnd(1,11);//byoは病気
        writing_file << count << endl;
        writing_file << endl;

        writing_file << "中吉\n\n憂うことが\nあっても\n身を慎んで\n過ごしていれば\n前に進むでしょう\n" << endl;


        //願望の処理開始
{
        writing_file << "願望 ";
        if (gan ==1)
        {
            writing_file << "力を合わせればきっと叶う" << endl;
        }
        if (gan ==2)
        {
            writing_file << "かなう" << endl;
        }
        if (gan ==3)
        {
            writing_file << "早めが吉" << endl;
        }
        if (gan ==4)
        {
            writing_file << "遅いがいずれかなう" << endl;
        }
        if (gan ==5)
        {
            writing_file << "その時に備えよ" << endl;
        }
        if (gan ==6)
        {
            writing_file << "祈れ" << endl;
        }
        if (gan ==7)
        {
            writing_file << "困難に立ち向かえ" << endl;
        }
        if (gan ==8)
        {
            writing_file << "絵馬にいのれ" << endl;
        }
        if (gan ==9)
        {
            writing_file << "行動を改めよ" << endl;
        }
        if (gan ==10)
        {
            writing_file << "言うことなし" << endl;
        }
        if (gan ==11)
        {
            writing_file << "現状維持" << endl;
        }
}
        //願望の処理終了

        //恋愛の処理開始
{
        writing_file << "恋愛 ";
        if (ren ==1)
        {
            writing_file << "良い人は すでに近くにいる" << endl;
        }
        if (ren ==2)
        {
            writing_file << "急ぐべからず" << endl;
        }
        if (ren ==3)
        {
            writing_file << "行動するべし" << endl;
        }
        if (ren ==4)
        {
            writing_file << "浮気に気をつけよう" << endl;
        }
        if (ren ==5)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ren ==6)
        {
            writing_file << "勇気を出そう" << endl;
        }
        if (ren ==7)
        {
            writing_file << "ミサンガが吉" << endl;
        }
        if (ren ==8)
        {
            writing_file << "3Aに来るのが吉" << endl;
        }
        if (ren ==9)
        {
            writing_file << "今はその時ではない" << endl;
        }
        if (ren ==10)
        {
            writing_file << "デートに誘うべし" << endl;
        }
        if (ren ==11)
        {
            writing_file << "祈れ" << endl;
        }
}
        //恋愛の処理終了

        //学問の処理開始
{
        writing_file << "学問 ";
        if (gak ==1)
        {
            writing_file << "集中力が途切れた時は ひと休み" << endl;
        }
        if (gak ==2)
        {
            writing_file << "うまくいく" << endl;
        }
        if (gak ==3)
        {
            writing_file << "あわてるな、まだその時じゃない" << endl;
        }
        if (gak ==4)
        {
            writing_file << "2は取らないだろう" << endl;
        }
        if (gak ==5)
        {
            writing_file << "試験のヤマあたる" << endl;
        }
        if (gak ==6)
        {
            writing_file << "卒研がさだまらない" << endl;
        }
        if (gak ==7)
        {
            writing_file << "T-GAP、アポ取りの危機" << endl;
        }
        if (gak ==8)
        {
            writing_file << "5が増える" << endl;
        }
        if (gak ==9)
        {
            writing_file << "もう一回遊べるドン" << endl;
        }
        if (gak ==10)
        {
            writing_file << "剽窃ばれる" << endl;
        }
        if (gak ==11)
        {
            writing_file << "努力が吉" << endl;
        }
}
        //学問の処理終了

        //旅行の処理開始
{
        writing_file << "旅行 ";
        if (ryo ==1)
        {
            writing_file << "遠出が吉" << endl;
        }
        if (ryo ==2)
        {
            writing_file << "道中に難あり" << endl;
        }
        if (ryo ==3)
        {
            writing_file << "快調に進む" << endl;
        }
        if (ryo ==4)
        {
            writing_file << "恋人といけ" << endl;
        }
        if (ryo ==5)
        {
            writing_file << "帰るまでが旅行" << endl;
        }
        if (ryo ==6)
        {
            writing_file << "留学に行ってみよう" << endl;
        }
        if (ryo ==7)
        {
            writing_file << "待ち人と出会う" << endl;
        }
        if (ryo ==8)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ryo ==9)
        {
            writing_file << "南南東にむかえ" << endl;
        }
        if (ryo ==10)
        {
            writing_file << "右に行け" << endl;
        }
        if (ryo ==11)
        {
            writing_file << "今はまて" << endl;
        }
}
        //旅行の処理終了

        //病気の処理開始
{
        writing_file << "病気 ";
        if (byo ==1)
        {
            writing_file << "心穏やかに過ごせ 快方に向かう" << endl;
        }
        if (byo ==2)
        {
            writing_file << "風邪をひくかも健康には気を付けて" << endl;
        }
        if (byo ==3)
        {
            writing_file << "健康に過ごせるでしょう" << endl;
        }
        if (byo ==4)
        {
            writing_file << "手洗いうがいしよう" << endl;
        }
        if (byo ==5)
        {
            writing_file << "難は去った" << endl;
        }
        if (byo ==6)
        {
            writing_file << "ネギが吉" << endl;
        }
        if (byo ==7)
        {
            writing_file << "消毒が吉" << endl;
        }
        if (byo ==8)
        {
            writing_file << "ご飯をちゃんと食べよう" << endl;
        }
        if (byo ==9)
        {
            writing_file << "早寝早起き" << endl;
        }
        if (byo ==10)
        {
            writing_file << "自分の体と向き合おう" << endl;
        }
        if (byo ==11)
        {
            writing_file << "健康診断に行くのがよろし" << endl;
        }
}
        //病気の処理終了
        writing_file << endl;
        writing_file << "#####################" << endl;
        writing_file << endl;
    }
    writing_file << endl;

    //中吉の処理終了

    //小吉の処理開始

    for(int m = 0; m < 27; m++)//ｍは小吉
    {
        count++;
        int gan = rnd(1,11);//ganは願望
        int ren = rnd(1,11);//renは恋愛
        int gak = rnd(1,11);//gakは学問
        int ryo = rnd(1,11);//ryoは旅行
        int byo = rnd(1,11);//byoは病気
        writing_file << count << endl;
        writing_file << endl;
        writing_file << "小吉\n\nいまひとつ\n納得いかない時は\n一歩下がって\n平穏を守る方が\nいいでしょう\n" << endl;

        //願望の処理開始
{
        writing_file << "願望 ";
        if (gan ==1)
        {
            writing_file << "叶うまで時間がかかる" << endl;
        }
        if (gan ==2)
        {
            writing_file << "かなう" << endl;
        }
        if (gan ==3)
        {
            writing_file << "早めが吉" << endl;
        }
        if (gan ==4)
        {
            writing_file << "遅いがいずれかなう" << endl;
        }
        if (gan ==5)
        {
            writing_file << "その時に備えよ" << endl;
        }
        if (gan ==6)
        {
            writing_file << "祈れ" << endl;
        }
        if (gan ==7)
        {
            writing_file << "困難に立ち向かえ" << endl;
        }
        if (gan ==8)
        {
            writing_file << "絵馬にいのれ" << endl;
        }
        if (gan ==9)
        {
            writing_file << "行動を改めよ" << endl;
        }
        if (gan ==10)
        {
            writing_file << "言うことなし" << endl;
        }
        if (gan ==11)
        {
            writing_file << "現状維持" << endl;
        }
}
        //願望の処理終了

        //恋愛の処理開始
{
        writing_file << "恋愛 ";
        if (ren ==1)
        {
            writing_file << "告白は しばらく待て" << endl;
        }
        if (ren ==2)
        {
            writing_file << "急ぐべからず" << endl;
        }
        if (ren ==3)
        {
            writing_file << "行動するべし" << endl;
        }
        if (ren ==4)
        {
            writing_file << "浮気に気をつけよう" << endl;
        }
        if (ren ==5)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ren ==6)
        {
            writing_file << "勇気を出そう" << endl;
        }
        if (ren ==7)
        {
            writing_file << "ミサンガが吉" << endl;
        }
        if (ren ==8)
        {
            writing_file << "3Aに来るのが吉" << endl;
        }
        if (ren ==9)
        {
            writing_file << "今はその時ではない" << endl;
        }
        if (ren ==10)
        {
            writing_file << "デートに誘うべし" << endl;
        }
        if (ren ==11)
        {
            writing_file << "祈れ" << endl;
        }
}
        //恋愛の処理終了

        //学問の処理開始
{
        writing_file << "学問 ";
        if (gak ==1)
        {
            writing_file << "歩みは遅いが 着実に実る" << endl;
        }
        if (gak ==2)
        {
            writing_file << "うまくいく" << endl;
        }
        if (gak ==3)
        {
            writing_file << "あわてるな、まだその時じゃない" << endl;
        }
        if (gak ==4)
        {
            writing_file << "2は取らないだろう" << endl;
        }
        if (gak ==5)
        {
            writing_file << "試験のヤマあたる" << endl;
        }
        if (gak ==6)
        {
            writing_file << "卒研がさだまらない" << endl;
        }
        if (gak ==7)
        {
            writing_file << "T-GAP、アポ取りの危機" << endl;
        }
        if (gak ==8)
        {
            writing_file << "5が増える" << endl;
        }
        if (gak ==9)
        {
            writing_file << "もう一回遊べるドン" << endl;
        }
        if (gak ==10)
        {
            writing_file << "剽窃ばれる" << endl;
        }
        if (gak ==11)
        {
            writing_file << "努力が吉" << endl;
        }
}
        //学問の処理終了

        //旅行の処理開始
{
        writing_file << "旅行 ";
        if (ryo ==1)
        {
            writing_file << "近場が吉" << endl;
        }
        if (ryo ==2)
        {
            writing_file << "道中に難あり" << endl;
        }
        if (ryo ==3)
        {
            writing_file << "快調に進む" << endl;
        }
        if (ryo ==4)
        {
            writing_file << "恋人といけ" << endl;
        }
        if (ryo ==5)
        {
            writing_file << "帰るまでが旅行" << endl;
        }
        if (ryo ==6)
        {
            writing_file << "留学に行ってみよう" << endl;
        }
        if (ryo ==7)
        {
            writing_file << "待ち人と出会う" << endl;
        }
        if (ryo ==8)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ryo ==9)
        {
            writing_file << "南南東にむかえ" << endl;
        }
        if (ryo ==10)
        {
            writing_file << "右に行け" << endl;
        }
        if (ryo ==11)
        {
            writing_file << "今はまて" << endl;
        }
}
        //旅行の処理終了

        //病気の処理開始
{
        writing_file << "病気 ";
        if (byo ==1)
        {
            writing_file << "体を休ませる時間をきちんととるべし" << endl;
        }
        if (byo ==2)
        {
            writing_file << "風邪をひくかも健康には気を付けて" << endl;
        }
        if (byo ==3)
        {
            writing_file << "健康に過ごせるでしょう" << endl;
        }
        if (byo ==4)
        {
            writing_file << "手洗いうがいしよう" << endl;
        }
        if (byo ==5)
        {
            writing_file << "難は去った" << endl;
        }
        if (byo ==6)
        {
            writing_file << "ネギが吉" << endl;
        }
        if (byo ==7)
        {
            writing_file << "消毒が吉" << endl;
        }
        if (byo ==8)
        {
            writing_file << "ご飯をちゃんと食べよう" << endl;
        }
        if (byo ==9)
        {
            writing_file << "早寝早起き" << endl;
        }
        if (byo ==10)
        {
            writing_file << "自分の体と向き合おう" << endl;
        }
        if (byo ==11)
        {
            writing_file << "健康診断に行くのがよろし" << endl;
        }
}
        //病気の処理終了

        writing_file << endl;
        writing_file << "#####################" << endl;
        writing_file << endl;
    }
    writing_file << endl;

    //小吉の処理終了

    //凶の処理開始

    for(int n = 0; n <24 ; n++)//ｎは凶
    {
        count++;
        int gan = rnd(1,11);//ganは願望
        int ren = rnd(1,11);//renは恋愛
        int gak = rnd(1,11);//gakは学問
        int ryo = rnd(1,11);//ryoは旅行
        int byo = rnd(1,11);//byoは病気

        writing_file << count << endl;
        writing_file << endl;
        writing_file << "凶\n\n焦るべからず\n機が熟するまで\nじっくりと\n力を蓄えるべし\n" << endl;

        //願望の処理開始
{
        writing_file << "願望 ";
        if (gan ==1)
        {
            writing_file << "膨らませるは自由 叶うはあなた次第" << endl;
        }
        if (gan ==2)
        {
            writing_file << "かなう" << endl;
        }
        if (gan ==3)
        {
            writing_file << "早めが吉" << endl;
        }
        if (gan ==4)
        {
            writing_file << "遅いがいずれかなう" << endl;
        }
        if (gan ==5)
        {
            writing_file << "その時に備えよ" << endl;
        }
        if (gan ==6)
        {
            writing_file << "祈れ" << endl;
        }
        if (gan ==7)
        {
            writing_file << "困難に立ち向かえ" << endl;
        }
        if (gan ==8)
        {
            writing_file << "絵馬にいのれ" << endl;
        }
        if (gan ==9)
        {
            writing_file << "行動を改めよ" << endl;
        }
        if (gan ==10)
        {
            writing_file << "言うことなし" << endl;
        }
        if (gan ==11)
        {
            writing_file << "現状維持" << endl;
        }
}
        //願望の処理終了

        //恋愛の処理開始
{
        writing_file << "恋愛 ";
        if (ren ==1)
        {
            writing_file << "今叶わなくとも、いつか縁あり" << endl;
        }
        if (ren ==2)
        {
            writing_file << "急ぐべからず" << endl;
        }
        if (ren ==3)
        {
            writing_file << "行動するべし" << endl;
        }
        if (ren ==4)
        {
            writing_file << "浮気に気をつけよう" << endl;
        }
        if (ren ==5)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ren ==6)
        {
            writing_file << "勇気を出そう" << endl;
        }
        if (ren ==7)
        {
            writing_file << "ミサンガが吉" << endl;
        }
        if (ren ==8)
        {
            writing_file << "3Aに来るのが吉" << endl;
        }
        if (ren ==9)
        {
            writing_file << "今はその時ではない" << endl;
        }
        if (ren ==10)
        {
            writing_file << "デートに誘うべし" << endl;
        }
        if (ren ==11)
        {
            writing_file << "祈れ" << endl;
        }
}
        //恋愛の処理終了

        //学問の処理開始
{
        writing_file << "学問 ";
        if (gak ==1)
        {
            writing_file << "今回は諦め、次回に切り替えるべし" << endl;
        }
        if (gak ==2)
        {
            writing_file << "うまくいく" << endl;
        }
        if (gak ==3)
        {
            writing_file << "あわてるな、まだその時じゃない" << endl;
        }
        if (gak ==4)
        {
            writing_file << "2は取らないだろう" << endl;
        }
        if (gak ==5)
        {
            writing_file << "試験のヤマあたる" << endl;
        }
        if (gak ==6)
        {
            writing_file << "卒研がさだまらない" << endl;
        }
        if (gak ==7)
        {
            writing_file << "T-GAP、アポ取りの危機" << endl;
        }
        if (gak ==8)
        {
            writing_file << "5が増える" << endl;
        }
        if (gak ==9)
        {
            writing_file << "もう一回遊べるドン" << endl;
        }
        if (gak ==10)
        {
            writing_file << "剽窃ばれる" << endl;
        }
        if (gak ==11)
        {
            writing_file << "努力が吉" << endl;
        }
}
        //学問の処理終了

        //旅行の処理開始
{
        writing_file << "旅行 ";
        if (ryo ==1)
        {
            writing_file << "引き籠れ" << endl;
        }
        if (ryo ==2)
        {
            writing_file << "道中に難あり" << endl;
        }
        if (ryo ==3)
        {
            writing_file << "快調に進む" << endl;
        }
        if (ryo ==4)
        {
            writing_file << "恋人といけ" << endl;
        }
        if (ryo ==5)
        {
            writing_file << "帰るまでが旅行" << endl;
        }
        if (ryo ==6)
        {
            writing_file << "留学に行ってみよう" << endl;
        }
        if (ryo ==7)
        {
            writing_file << "待ち人と出会う" << endl;
        }
        if (ryo ==8)
        {
            writing_file << "新たな出会いあり" << endl;
        }
        if (ryo ==9)
        {
            writing_file << "南南東にむかえ" << endl;
        }
        if (ryo ==10)
        {
            writing_file << "右に行け" << endl;
        }
        if (ryo ==11)
        {
            writing_file << "今はまて" << endl;
        }
}
        //旅行の処理終了

        //病気の処理開始
{
        writing_file << "病気 ";
        if (byo ==1)
        {
            writing_file << "医師はしっかり選べ" << endl;
        }
        if (byo ==2)
        {
            writing_file << "風邪をひくかも健康には気を付けて" << endl;
        }
        if (byo ==3)
        {
            writing_file << "健康に過ごせるでしょう" << endl;
        }
        if (byo ==4)
        {
            writing_file << "手洗いうがいしよう" << endl;
        }
        if (byo ==5)
        {
            writing_file << "難は去った" << endl;
        }
        if (byo ==6)
        {
            writing_file << "ネギが吉" << endl;
        }
        if (byo ==7)
        {
            writing_file << "消毒が吉" << endl;
        }
        if (byo ==8)
        {
            writing_file << "ご飯をちゃんと食べよう" << endl;
        }
        if (byo ==9)
        {
            writing_file << "早寝早起き" << endl;
        }
        if (byo ==10)
        {
            writing_file << "自分の体と向き合おう" << endl;
        }
        if (byo ==11)
        {
            writing_file << "健康診断に行くのがよろし" << endl;
        }
}
        //病気の処理終了
        writing_file << endl;
        writing_file << "#####################" << endl;
        writing_file << endl;
    }

    //凶の処理終了
    //書き込み終了

    writing_file.close();
    return 0;
}
