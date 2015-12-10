#pragma once

#include "BT.cpp"
#include <msclr\marshal_cppstd.h>
namespace MYKURS {

	using namespace std;
	using namespace binTree_modul;
	using namespace System;
	using namespace System::Runtime::InteropServices;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace msclr::interop;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//	
		}
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label2;


	private:
		/// <summary>
		/// ��������� ���������� ������������.

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->richTextBox1->Location = System::Drawing::Point(3, 151);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(577, 497);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->Location = System::Drawing::Point(586, 151);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(764, 590);
			this->panel1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(843, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"������ ��������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(13, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(601, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"��������! ����������� �� ����! ������ ��������� ��������� ����� � ������� \? ! ( )" 
				L" * %";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 68);
			this->button1->TabIndex = 3;
			this->button1->Text = L"������������ ������ �� �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(823, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 68);
			this->button2->TabIndex = 4;
			this->button2->Text = L"������������ ������ �� �����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(351, 38);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(317, 34);
			this->button3->TabIndex = 5;
			this->button3->Text = L"������� ������, ������� ������ ������������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(335, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(377, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1354, 733);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"������������ ����������� � ������������� �� ��������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	void displayBT1 (binTree b, int n,ofstream& out)
	{	// n - ������� ����
		if (b!=NULL)
		{

			displayBT1 (Right1(b),n+1,out);
			for (int i=0;i<n;i++) out << "     "; // ������
			out << "     " << "(" << b->weight ; // "   "
			if(b->info!=' ') out << "/" << b->info << ")" ;
			else out << ")";
			out << endl;
			displayBT1 (Left1(b),n+1,out);
		}
	}
	inline void displayBT (binTree b, int theX, int theY,int n, int theX1, int theY1)
	{	
		//System::Text::Encoding::Default;
		Graphics ^panelGraphics = panel1->CreateGraphics();
		if (b!=NULL) 
		{
			Label^ label = gcnew Label();
			label->Font = gcnew System::Drawing::Font("verdana",11);
			label->Width = 40;
			label->Height=40;
			label->BackColor = Color::YellowGreen;
			label->Location = Point(theX1, theY1);
			if(b->info!=' ')
			{label->Text =(wchar_t)RootBT(b)+"(" + (b->weight)+")";}
			else 
				{label->Text = "("+(b->weight)+")";}
			panel1->Controls->Add(label);				
			n++;
			if(!isNull(Right1(b))) 
			{
				displayBT (Right1(b),theX1,theY1,n,theX1+150/n,theY1+50);
			}
				if(theX !=theX1 && theY !=theY1)
			{
				panelGraphics->DrawLine( gcnew Pen(Color::Brown, 2), Point(theX+10,theY+10), Point(theX1+10,theY1+10));
			}
		
 			if(!isNull(Left1(b))) 
			{
				displayBT (Left1(b),theX1,theY1,n,theX1-150/n,theY1+50);
			}
		}
	}
	inline void pr1(string code)
	{
		int size=code.length();
		for(int step1=0;step1<size;step1++)
		{
			if(code[step1]!='0')
			{
				if (code[step1]!='1')
				{
						MessageBox::Show("������!(������� ������ �������������� ������)");
						exit(1);
				}
			}
		}
	}
	inline string Kodir(char a,diction slovar[34])
	{//�������� ������ ��������� ���������
		int j=0;
		while((slovar[j].symv!=a)&&(j!=34))  j++;//���� ��������� ������� ������� � �������
		if(j==34) 
		{
			MessageBox::Show( "������ ( ������� ������� ��� � �������)"); 
			exit(1);
		}
		return slovar[j].code;
	}
	inline void Diction(string &ch,int &step,ofstream& out1,diction slovar[34])
	{
		string z;//������ ������� ����� ���������������
		int a=step; //�������� ������� ������
		bool m=true;
		for(int i=0;i<4;i++)
		{
			z+=ch[step];//��������� z, �������������� ��������
			step++;
		}
		if(z=="0000") 
		{
			z+=ch[step];//��������� z, �������������� ��������
			step++;
		}
		z+=ch[step];//��������� z, �������������� ��������
		out1<<"������� ���: "<<z<<endl;
		out1<<"������ ��������������� ��� ������ � �������: "<<endl;
		int j=0;
		while((slovar[j].code!=z)&&(j!=34))  j++;//���� ������ ��������� � �������
		if(j==34) 
		{
			MessageBox::Show( "������ ( ������� ������� ��� � �������)"); 
			exit(1);
		}
		ch[step]=slovar[j].symv;//�������� ��������� ������ ��������������� �������, �� ��������������� ������
		out1<<ch[step] <<endl;
	} 
	inline binTree Dechip(string code,binTree root,int& step,ofstream& out)
	{//��������� �������� �� ��������� ������ ��� ��������� ��� ��� ����� ������
		out<< "������� "<<endl;
		while(code[step])
		{
			out << code[step];
			if(code[step]=='1')//��� 1 ��������� �������
			{
				if(!root->rt)
				{
					MessageBox::Show( "������ �������������� ������!"); 
					exit(1);
				}
				root=root->rt;
			}
			if(code[step]=='0')//��� 0 ��������� ������ 
			{
				if(!root->lt)
				{
					MessageBox::Show( "������ �������������� ������!"); 
					exit(1);
				}
				root=root->lt;
			}
			step++;//����������� ����� ���������� ���������� �������
			if(root->weight==0)
			{
				out << "- ��� ���� � '������� ����� "<<endl;
				return root;//���� �� ������ �� "������ ����", �� ����� ������ �� ���������� ������
			}
			if(root->info!=' ')
			{
				out << "- ��� ���� � ����� �� ��������� "<< root->info <<endl;
				return root;//���� �� ������ � ���� � �����-�� ������, �� ������ ��� ����� ���� ������������� 
			}
		}
		MessageBox::Show( "������ �������������� ������!");
		exit(1);
	}
//-----------------------------------------------
	inline binTree Cons(binTree parent,base info,binTree *check,string &code,int &i,ofstream& out,diction slovar[34])
	{
		binTree right, left;
		string d;
		out <<"������� ������ �� ������� ���� - ������� � �����/�����: ("<< parent->code<<"/"<<parent->weight<<")"<<endl;
		right=new node;//������� 
		left=new node;//����� ����� � ������ ���������
		i++;
		check[i]=right;//������� �� � ������, ����� ������� �� ���������������� ������
		i++;
		check[i]=left;
		right->info=info;//��������� ������ ���������
		right->parent=parent;
		right->weight=0;
		code+=parent->code;//�������� � ������� ������ parent->code � ��� �������
		d=Kodir(info,slovar);//���������� ������ ��������� �������� �������
		code+=d;
		//code+=' ';
		right->code=parent->code+"1";//������� 1 � ����(�.�. �� ������ �������)
		out << "������� ������ ��������� �� ���������: "<< info<<" � ����� "<<right->code<<" ����� "<<right->weight<<endl;
		out << "������� � ������� ������ ��� �������� �� �������� �������� ���� � ����� �������� ("<<parent->code<<") � ��� ������� ��������� ������� ("<<d<<")"<<endl;
		out << "������� ������ ������ �������� ���: "<<code<<endl;
		left->weight=0;
		left->parent=parent;
		left->code=parent->code+"0";//������� 0 � ���� (�.�. ��� ����� �������)
		out<< "������� ����� ��������� � ����� "<<left->code<<endl;
		out << "����� ��������� ���������� ����� ������, �� �������� ����� ��������� ����������� �������"<<endl;
		parent->lt=left;//�������� ��������� �� ����� � ������ �������
		parent->rt=right;
		out << "�������� ���� ������� ��������� � ���� ��������� ��� ���" << endl;
		UpTree(right);
		return left;
	}
//---------------------------------------
	inline void Codes(binTree &a,string b)
	{//�������������� ���������� ��� ���� ��������� ������
		a->code=b;
		if(a->lt)
		{
			b+="0";//��� ����� ��������� 0 � ���
			Codes(a->lt,b);
			b.resize(b.size()-1);//��� ������� �� ������� ����,������� ��������� ������ ����
		}
		if(a->rt)
		{
			b+="1";//��� ������ ��������� 1 � ���
			Codes(a->rt,b);
			b.resize(b.size()-1);//��� ������� �� ������� ����,������� ��������� ������ ����
		}
	}
//---------------------------------------
	inline void Swap(binTree &a,binTree &b,ofstream& out)
	{//������ �������� ������� � ������ 
		string codes;
		binTree c;
		c=b->parent;
		if(a->parent==b->parent)//���� ��� �� ������ ��������
		{
			if(a->parent->lt==a)
			{
				a->parent->lt=b;//������ ������� ��������� ��������(����� ��������� ����� ������, ������ �����)
				a->parent->rt=a;
			}
			else
			{
				a->parent->lt=a;//������ ������� ��������� ��������(����� ��������� ����� ������, ������ �����)
				a->parent->rt=b;
			}
		}
		else//���� ��� �� ������ ��������� 
		{
			if(a->parent->lt==a)//���� � ��� ����� ����������
			{
				a->parent->lt=b;//���������� ���� ������ �, ����� ������ b
				b->parent=a->parent;//����� ������ b,���� ���� �
			}
			else//�����
			{
				a->parent->rt=b;//���������� ���� ������ �, ����� ������ b
				b->parent=a->parent;//����� ������ b,���� ���� �
			}
			if(c->lt==b)//���� b ��� ����� ���������
			{
				c->lt=a;//���������� ���� ������ b, ����� ������ �
				a->parent=c;//����� ������ �,���� ���� b
			}
			else//�����
			{
				c->rt=a;//���������� ���� ������ b, ����� ������ �
				a->parent=c;//����� ������ �,���� ���� b
			}
		}
		c=a;//��������� ��������� �� ������ �,b
		binTree e=b;
		out <<"����������� ������ ���������, ����� ��� � ������� ������� ��������� ���=��� ��������+1, � ������ ���=��� ��������+0"<<endl;
		codes=a->parent->code;
		Codes(a->parent,codes);//���������� ��������� ����������� ������
		codes=b->parent->code;
		Codes(b->parent,codes);//���������� ��������� ����������� ������
		a=a->parent;
		out << "������������ ����, ��� ��� ��� ������� ����� ������ ����� �����, ����� ����� �� ������ � ������� ��� ������"<<endl;
		while(a)//����������� ���� ��� �
		{
			a->weight=a->lt->weight+a->rt->weight;
			a=a->parent;
		}
		b=b->parent;
		while(b)//����������� ���� ��� b
		{
			b->weight=b->lt->weight+b->rt->weight;
			b=b->parent;
		}
		a=c;//���������� ����������� ��������� �� a � b
		b=e;
	}
//---------------------------------------
	inline void CheckTree(binTree *check,int i,ofstream& out)
	{//����������� ��������������� ������
		binTree a;
		out << "��������, ����������� �� ���� ������" << endl;
		displayBT1(check[0],1,out);
		for(int j=i;j>0;j--)
		{
			if(check[j]->weight>check[j-1]->weight)//���� ������� ������
			{
				int z=j-1;
				out << "������� �� ������������� �������� � (�����/�����): ("<< check[j]->code<< "/"<< check[j]->weight<<") (" <<check[j-1]->code<<"/"<<check[j-1]->weight<< ")"<<endl;
				out << "�������� ��� �� �������� � ����� ������� ��� ��� 1�� ��������, � ������������ ������ 2��"<< endl;
				for(int k=j;k>0;k--)//������ ����� ������� �������, ������� ������ ��� ��� �������
				{
					if(check[j]->weight>check[k-1]->weight) z=k-1;
				}
				if(z!=j-1)
				{
				out << "����� ������� ������: ("<<check[z]->code<<"/"<<check[z]->weight<<")"<<endl;
				}
				else out << "������ �������� ���"<< endl;
				out << "�������� �� �������"<<endl;
				Swap(check[j],check[z],out);//�������� ��� �������� � ������
				a=check[j];//��� �� �������� �� � �������
				check[j]=check[z];
				check[z]=a;
				displayBT1(check[0],1,out);
				j=j+2;//�������� �� 2 ���� �����, ����� ���������, �� ��������� �� ����� ������ 
			}
		}
	}
//---------------------------------------
	inline void enterBT(string &code,string &ch,ofstream& out,diction slovar[34])//���� � ��������������� ����������� ������ � �������
	{
			int i=0;//����� ���������� ���������� �������� ������
			int step=0;
			int j=0;
			binTree l,m,root;
			binTree check[100];
			m=new node;//�������� 1� ������� �� �������� �� ����� ������� ������
			m->code="";
			m->weight=0;
			m->parent=0;
			check[i]=m;
			root=m;
			out << "�������� �������� , ��� ������� ���������� �������: "<<ch[j]<<endl;
			m=Cons(m,ch[j],check,code,i,out,slovar);//������������� ������ ��� ������� �������(�.�. �� ����� �����)
			displayBT1(check[0],1,out);
			bool k=false;//�������� ��� �� ������ ������ ������
			j++;
			char c=ch[j];
			while(ch[j])
			{
				c=ch[j];
				out << "�������� �������� , ��� ���������� �������: " <<ch[j]<<" �������� ��� �� ������ ������ ��� ������ � �������� � ������."<<endl;
				for(int q=0;q<i;q++)//��������� ��� �� ������ ������� ������
				{
					if(check[q]->info!=0) 
					{
						out << check[q]->info << "�" << ch[j]<<endl;
					}
					if(check[q]->info==ch[j])//������� �������
					{
						out << "������ ��� ��� ������!"<< endl;
						l=check[q];//l- ��������� �� ������� � ������ ��������
						k=true;
						break;
					}
				}
				if(k)//���� �� ��� ���
				{ 
					UpTree(l);
					out <<"�������� ��� ����� � ������ �������� � ���� ��������� ��� ���" << endl <<"������� � ������� ������ ��� ����� �����: "<<l->code<<endl;
					code+=l->code;// �������� ��� �������� ������� � ������ l->code
					out << "������� ��� ������� ������: " << code <<endl;
					CheckTree(check,i,out);//�������� ������ �� ����������������
					k=false;
				}
				else//���� ��� ��� �� ����
				{
					out << "������ �� ��� ������!" <<endl;
					m=Cons(m,ch[j],check,code,i,out,slovar);//�������� ������
					CheckTree(check,i,out);//�������� ������ �� ���������������
				}
				j++;
			}
			displayBT(check[0],320,10,0,320,10);
	}
//---------------------------------------
	void Cons1(binTree parent,base info,binTree *check,ofstream& out1,int& i)
	{
		binTree right, left;
		string d;
		out1 << "������ �� �������� ����� �������� ��� �������, �������� ������� � ����� " << parent->code << " � �����=" << parent->weight << endl; 
		right=new node;//������� 
		left=new node;//����� ����� � ������ ���������
		i++;
		check[i]=right;//������� �� � ������, ����� ������� �� ���������������� ������
		i++;
		check[i]=left;
		right->info=info;//��������� ������ ���������
		right->parent=parent;
		right->weight=0;
		right->code=parent->code+"1";
		out1 << "������� ������ ��������� �� ���������: " << info << " � ����� " << right->code << " �����=" << right->weight << endl; 
		left->weight=0;//��������� ����� ��������� 
		left->parent=parent;
		left->code=parent->code+"0";
		out1 << "������� ����� ��������� � ����� " << left->code << endl;
		parent->lt=left;//��������� ��������� �� ����� � ������ ��������� �� ��������
		parent->rt=right;
		out1 << "�������� ���� ������� ��������� � ���� ��������� ��� ���" << endl;
		UpTree(right);
	}
	void enterBT1(string &decode,string &ch,ofstream& out1,diction slovar[34])//���� � ��������������� �������������� ������ � ������� � �������������� ���������
	{	
		int i=0;
		int step=0;
		out1 <<"������ �������������! " << endl;
		binTree m,root;
		binTree check[100];
		m=new node;//�������� 1� ������� �� �������� �� ����� ������� ������
		m->code="";
		m->weight=0;
		m->parent=0;
		check[i]=m;
		root=m;//�� �������� ������� ������
		Diction(ch,step,out1,slovar);//��������� ������ ������ �� ��������� ���� � ������
		out1 << "�������� �������� , ��� ������� ���������� �������: " << ch[step] <<  endl;
		out1 << "������� ��� �������� � ��������������� ��������� " << endl;
		decode+=ch[step];//������� ��� � ��������������� ����������
		Cons1(m,ch[step],check,out1,i);//�������� ������
		displayBT1(check[0],1,out1);
		step++;//�������� � ����. �������
		while(ch[step])
		{
			CheckTree(check,i,out1);//�������� �� ���������������
			out1 << "������� ��� ���������������� ���������:" << decode << endl;
			m=Dechip(ch,root,step,out1);//�������� �������� �� ��������� ������ ��������� ��� �� �����
			if(m->weight==0)//���� �� �����
			{
				Diction(ch,step,out1,slovar);//��������� ������ ������ �� ��������� ���� � ������
				out1 << "������� ��� �������� � ��������������� ��������� " << endl;
				decode+=ch[step];//������� ��� � ��������������� ����������
				Cons1(m,ch[step],check,out1,i);//�������� ���������
				step++;
			}
			else
			{
				out1 << "������� � ��������. ������ �������� �������� �����: " << m->info << endl;
				decode+=m->info;
				out1 << "�������� ��� ����� � ������ �������� � ���� ��������� ��� ���" << endl;
				UpTree(m);
			}
		}
		displayBT(check[0],320,10,0,320,10);
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			setlocale(0,"Rus");
			ifstream file("input.txt");
			ofstream out("output.txt");
			ofstream in1("input1.txt");
			diction slovar[34];
			ifstream infile ("Slovar.txt");
			string code;
			string ch;
			in1.clear();
			char u;
			int length;
			panel1->Controls->Clear(); 
			panel1->Invalidate();
			infile >> u;
			for(int i1=0;i1<34;i1++)
			{
				slovar[i1].symv=u;
				infile >> u;
				while((u=='1')||(u=='0'))
				{
					slovar[i1].code+=u;
					infile >> u;
					length=slovar[i1].code.length();
					if(length>5)
					{
						break;
					}
				}
			}
			file.clear();
			file.seekg(0,ios::beg);
			getline(file,ch);
			if(ch.length()==0) 
			{
				MessageBox::Show("���� �� ��� ������ ��� �� ����");	
				exit(1);
			}
			out <<"���������: " << ch<< endl;
			enterBT(code,ch,out,slovar);
			out << "������� ������ �������!" << endl << "�������������� ���������: " << code<<endl;;
			in1 <<code;
			file.close();
			out.close();
			in1.close();
			String^ file2=File::ReadAllText("output.txt",System::Text::Encoding::Default);
			this->richTextBox1->Text=file2;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			ifstream infile ("Slovar.txt");
			ifstream in1("input1.txt");
			ofstream out1("output1.txt");
			diction slovar[34];
			string code;
			string decode;
			int length;
			char u;
			panel1->Controls->Clear(); 
			panel1->Invalidate();
			infile >> u;
			for(int i1=0;i1<34;i1++)
			{
				slovar[i1].symv=u;
				infile >> u;
				while((u=='1')||(u=='0'))
				{
					slovar[i1].code+=u;
					infile >> u;
					length=slovar[i1].code.length();
					if(length>5)
					{
						break;
					}
				}
			}
			in1.clear();
			in1.seekg(0,ios::beg);
			getline(in1,code);
			String^ file1=File::ReadAllText("input1.txt",System::Text::Encoding::Default);
			this-> richTextBox1->Text=file1;
			if(code.length()==0) 
			{
				MessageBox::Show("���� �� ��� ������ ��� �� ����");	
				exit(1);
			}
			pr1(code);
			out1 << "���������: " << code << endl;
			enterBT1(decode,code,out1,slovar);
			out1 << "��������������� ���������: " << decode << endl;
			in1.close();
			out1.close();
			String^ file2=File::ReadAllText("output1.txt",System::Text::Encoding::Default);
			this->richTextBox1->Text=file2;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			setlocale(0,"Rus");
			ofstream out("output.txt");
			ofstream in1("input1.txt");
			diction slovar[34];
			ifstream infile ("Slovar.txt");
			in1.clear();
			string code;
			string ch;
			char u;
			int length;
			panel1->Controls->Clear(); 
			panel1->Invalidate();
			infile >> u;
			for(int i1=0;i1<34;i1++)
			{
				slovar[i1].symv=u;
				infile >> u;
				while((u=='1')||(u=='0'))
				{
					slovar[i1].code+=u;
					infile >> u;
					length=slovar[i1].code.length();
					if(length>5)
					{
						break;
					}
				}
			}
			String^ text = textBox1->Text;
			ch = marshal_as<string>(text);
			out << "������� ���������:" << ch << endl;
			if(ch.length()==0)  MessageBox::Show("������� ������");	
			else
			{
				enterBT(code,ch,out,slovar);
				out <<"������� ������ �������!" << endl;
				out << endl << "�������������� ���������: " << code << endl;
				in1<<code;
				infile.close();
				out.close();
				in1.close();
				String^ file2=File::ReadAllText("output.txt",System::Text::Encoding::Default);
				this->richTextBox1->Text=file2;
			}
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
