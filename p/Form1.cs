using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
namespace p
{
    public partial class Form1 : Form
    {
        int k2 = 0;
        public Form1()
        {
            InitializeComponent();
            StartPosition = FormStartPosition.CenterScreen;
            mp.uiMode = "none";
            int v = int.Parse(System.IO.File.ReadLines(@"C:\Users\User\Desktop\1\p\p\bin\Debug\m.txt").Skip(4).First().ToString());
            if (System.IO.File.ReadAllText(@"m.txt") != "" && v != 0)
            {
                DialogResult dialogResult = MessageBox.Show("Хотите-ли вы продолжить просматривать последнее видео с последнего момента?", "Продолжать?", MessageBoxButtons.YesNo);
                if (dialogResult == DialogResult.Yes)
                {
                    {
                        int l = 1;
                        foreach (var line in File.ReadLines(@"m.txt"))
                        {
                            if (l == 1)
                            {
                                int value = int.Parse(line);
                                mp.settings.volume = value;
                                trackBar1.Value = value;
                            }
                            else if (l == 2)
                            {
                                int value = int.Parse(line);
                                if (value == 0)
                                {
                                    mp.settings.rate = 0.5f;
                                }
                                else if (value == 1)
                                {
                                    mp.settings.rate = 1.0f;
                                }
                                else
                                {
                                    mp.settings.rate = 2.0f;
                                }
                            }
                            else if (l == 3)
                            {
                                int value = int.Parse(line);
                                k2 = value;
                                if (k2 == 0)
                                {
                                    label2.Text = "Героям слава!";
                                }
                                else
                                {
                                    label2.Text = "Слава Україні!";
                                }
                            }
                            else if (l == 4)
                            {
                                if (line != ""){
                                    mp.URL = @line; 
                                }
                            }
                            else
                            {
                                int value = int.Parse(line);

                                if (value > 0)
                                {
                                    trackBar3.Value = value;
                                    mp.Ctlcontrols.currentPosition = trackBar3.Value;
                                    int pl = value;
                                    int pl2 = pl / 3600;
                                    int pl3 = (pl - (pl2 * 3600)) / 60;
                                    pl = pl - (pl2 * 3600 + pl3 * 60);
                                    if (pl2 > 1)
                                    {
                                        label1.Text = String.Format("{0:D}:{1:D1}:{2:D2}", pl2, pl3, pl);
                                    }
                                    else
                                    {
                                        if (pl < 10)
                                        {
                                            label1.Text = String.Format("{0:D}:0{1:D1}", pl3, pl);
                                        }
                                        else
                                        {
                                            label1.Text = String.Format("{0:D}:{1:D1}", pl3, pl);
                                        }
                                    }

                                }
                                else
                                {
                                    label1.Text = "00:00:00";
                                }
                            }
                            l++;
                        }
                    }
                }
            }
        }

        private void fileToolStripMenuItem_Click(object sender, EventArgs e)
        {
        }

        private void открытьToolStripMenuItem_Click(object sender, EventArgs e)
        {
            OpenFileDialog op = new OpenFileDialog();
            for (int i = 0; i < 2; i++)
            {
                op.Filter = "All Media Files (*.*)|*.wav;*.aac;*.wma;*.wmv;*.avi;*.mpg;*.mpeg;*.m1v;*.mp2;*.mp3;*.mpa;*.mpe;*.m3u;*.mp4;*.mov;*.3g2;*.3gp2;*.3gp;*.3gpp;*.m4a;*.cda;*.aif;*.aifc;*.aiff;*.mid;*.midi;*.rmi;*.mkv;*.WAV;*.AAC;*.WMA;*.WMV;*.AVI;*.MPG;*.MPEG;*.M1V;*.MP2;*.MP3;*.MPA;*.MPE;*.M3U;*.MP4;*.MOV;*.3G2;*.3GP2;*.3GP;*.3GPP;*.M4A;*.CDA;*.AIF;*.AIFC;*.AIFF;*.MID;*.MIDI;*.RMI;*.MKV|Cursova File|*.mp4;*.wmv;*.avi;*.mkv";
            }
                if (op.ShowDialog() == DialogResult.OK)
            {

                mp.URL = op.FileName;
            }
            else
            {
                return;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void panel3_Paint(object sender, PaintEventArgs e)
        {

        }
        private void label1_Click_1(object sender, EventArgs e)
        {
         
        }
        int k = 0;

        private void panel4_Click(object sender, EventArgs e)
        {
            if (k == 0)
            {
                panel4.BackgroundImage = imageList1.Images[0];
                mp.Ctlcontrols.pause();
                k++;
            }
            else
            {
                panel4.BackgroundImage = imageList1.Images[1];
                mp.Ctlcontrols.play();
                k--;
            }
        }

        private void trackBar1_ValueChanged(object sender, EventArgs e)
        {
            mp.settings.volume = trackBar1.Value;
            if (trackBar1.Value <= 5)
            {
                panel5.BackgroundImage = imageList1.Images[2];
            }
            else if (trackBar1.Value > 5 && trackBar1.Value <= 30)
            {
                panel5.BackgroundImage = imageList1.Images[4];
            }
            else if (trackBar1.Value > 30 && trackBar1.Value <= 70)
            {
                panel5.BackgroundImage = imageList1.Images[3];
            }
            else
            {
                panel5.BackgroundImage = imageList1.Images[5];
            }
        }

        private void panel5_MouseUp(object sender, MouseEventArgs e)
        {
            trackBar1.Visible = true;
            panel7.Left = 270;
            panel8.Left = 315;
        }

        private void mp_PlayStateChange(object sender, AxWMPLib._WMPOCXEvents_PlayStateChangeEvent e)
        {
            timer1.Enabled = true;
            timer1.Interval = 1000;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            trackBar3.Maximum = Convert.ToInt32(mp.currentMedia.duration);
            trackBar3.Value = Convert.ToInt32(mp.Ctlcontrols.currentPosition);
            if (trackBar3.Value < trackBar3.Minimum || trackBar3.Value > trackBar3.Maximum)
            {
                MessageBox.Show("К сожалению при запуске видео что-то пошло не так, попробуйте снова или поменяйте разширения вашего видео", "Что-то пошло не так(", MessageBoxButtons.OK);
                return;
            }

            if (mp != null)
            {
                int pl = (int)mp.Ctlcontrols.currentPosition;
                int pl2 = pl / 3600;
                int pl3 = (pl - (pl2*3600))/ 60;
                pl = pl - (pl2 * 3600 + pl3 * 60);
                if (pl2 > 1)
                {
                    label1.Text = String.Format("{0:D}:{1:D1}:{2:D2}", pl2, pl3, pl);
                }
                else
                {
                    if (pl < 10)
                    {
                        label1.Text = String.Format("{0:D}:0{1:D1}", pl3, pl);
                    }
                    else
                    {
                        label1.Text = String.Format("{0:D}:{1:D1}", pl3, pl);
                    }
                }
            }
            else
            {
                label1.Text = "00:00:00";
            }
        }

        private void trackBar2_Scroll(object sender, EventArgs e)
        {
            mp.Ctlcontrols.currentPosition = trackBar3.Value;
        }
        private void label2_Click(object sender, EventArgs e)
        {
            if (k2 == 0)
            {
                label2.Text = "Героям слава!";
                k2++;
            }
            else
            {
                label2.Text = "Слава Україні!";
                k2--;
            }
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void mp_Enter(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {
            mp.settings.rate = 0.5f;
        }

        private void label4_Click(object sender, EventArgs e)
        {
            mp.settings.rate = 1.0f;
        }

        private void label5_Click(object sender, EventArgs e)
        {
            mp.settings.rate = 2.0f;
        }

        private void panel7_MouseMove(object sender, MouseEventArgs e)
        {
            panel8.Visible = true;
        }

        private void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            System.IO.File.WriteAllText(@"m.txt", trackBar1.Value.ToString());
            System.IO.File.AppendAllText(@"m.txt", "\n");
            System.IO.File.AppendAllText(@"m.txt", mp.settings.rate.ToString());
            System.IO.File.AppendAllText(@"m.txt", "\n");
            if (label2.Text == "Героям слава!")
            {
                System.IO.File.AppendAllText(@"m.txt", 0.ToString());
            }
            else
            {
                System.IO.File.AppendAllText(@"m.txt", 1.ToString());
            }
            System.IO.File.AppendAllText(@"m.txt", "\n");
            System.IO.File.AppendAllText(@"m.txt", mp.URL);
            System.IO.File.AppendAllText(@"m.txt", "\n");
            System.IO.File.AppendAllText(@"m.txt", trackBar3.Value.ToString());
            trackBar3.Visible = false;
            mp.Visible = false;
            trackBar1.Visible = false;
            label1.Visible = false;
            panel3.Visible = false;
            panel6.Visible = false;
            System.Threading.Thread.Sleep(500);
        }
    }
}
