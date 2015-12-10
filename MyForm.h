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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//	
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
		/// Требуется переменная конструктора.

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
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
			this->label2->Text = L"Дерево Хаффмана";
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
			this->label1->Text = L"Внимание! Ограничение на ввод! Только заглавные латинские буквы и символы \? ! ( )" 
				L" * %";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 68);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Закодировать строку из файла";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(823, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 68);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Декодировать строку из файла";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(351, 38);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(317, 34);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Введите строку, которую хотить закодировать";
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
			this->Text = L"Динамическое кодирование и декодирование по Хаффману";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	void displayBT1 (binTree b, int n,ofstream& out)
	{	// n - уровень узла
		if (b!=NULL)
		{

			displayBT1 (Right1(b),n+1,out);
			for (int i=0;i<n;i++) out << "     "; // вправо
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
						MessageBox::Show("Ошибка!(Неверно задана закодированная строка)");
						exit(1);
				}
			}
		}
	}
	inline string Kodir(char a,diction slovar[34])
	{//Кодирует первое вхождение элементов
		int j=0;
		while((slovar[j].symv!=a)&&(j!=34))  j++;//Ищем кодировку данного символа в словаре
		if(j==34) 
		{
			MessageBox::Show( "Ошибка ( Данного символа нет в словаре)"); 
			exit(1);
		}
		return slovar[j].code;
	}
	inline void Diction(string &ch,int &step,ofstream& out1,diction slovar[34])
	{
		string z;//Строка которую будем преобразовывать
		int a=step; //Запомним текущий символ
		bool m=true;
		for(int i=0;i<4;i++)
		{
			z+=ch[step];//Заполняем z, закодированным символом
			step++;
		}
		if(z=="0000") 
		{
			z+=ch[step];//Заполняем z, закодированным символом
			step++;
		}
		z+=ch[step];//Заполняем z, закодированным символом
		out1<<"Выделим код: "<<z<<endl;
		out1<<"Найдем соответствующий ему символ в словаре: "<<endl;
		int j=0;
		while((slovar[j].code!=z)&&(j!=34))  j++;//Ищем данную кодировку в словаре
		if(j==34) 
		{
			MessageBox::Show( "Ошибка ( Данного символа нет в словаре)"); 
			exit(1);
		}
		ch[step]=slovar[j].symv;//Заменяем последний символ закодированного символа, на раскодированный символ
		out1<<ch[step] <<endl;
	} 
	inline binTree Dechip(string code,binTree root,int& step,ofstream& out)
	{//Проверяем является ли следующий символ уже считанным или это новый символ
		out<< "Выделим "<<endl;
		while(code[step])
		{
			out << code[step];
			if(code[step]=='1')//При 1 двигаемся направо
			{
				if(!root->rt)
				{
					MessageBox::Show( "Ошибка закодированной строки!"); 
					exit(1);
				}
				root=root->rt;
			}
			if(code[step]=='0')//При 0 двигаемся налево 
			{
				if(!root->lt)
				{
					MessageBox::Show( "Ошибка закодированной строки!"); 
					exit(1);
				}
				root=root->lt;
			}
			step++;//Увеличиваем номер последнего считанного символа
			if(root->weight==0)
			{
				out << "- это путь к 'пустому листу "<<endl;
				return root;//Если мы попали на "пустой лист", то нужно символ не встречался раньше
			}
			if(root->info!=' ')
			{
				out << "- это путь к листу со значением "<< root->info <<endl;
				return root;//Если мы попали в лист с какой-то буквой, то именно эта буква была закодированна 
			}
		}
		MessageBox::Show( "Ошибка закодированной строки!");
		exit(1);
	}
//-----------------------------------------------
	inline binTree Cons(binTree parent,base info,binTree *check,string &code,int &i,ofstream& out,diction slovar[34])
	{
		binTree right, left;
		string d;
		out <<"Главный корень на текущем шаге - элемент с кодом/весом: ("<< parent->code<<"/"<<parent->weight<<")"<<endl;
		right=new node;//Создаем 
		left=new node;//новое левое и правое поддерево
		i++;
		check[i]=right;//Заносим их в массив, чтобы следить за упорядоченностью дерева
		i++;
		check[i]=left;
		right->info=info;//Заполняем правое поддерево
		right->parent=parent;
		right->weight=0;
		code+=parent->code;//Добавить в кодовую строку parent->code и код символа
		d=Kodir(info,slovar);//Закодируем первое вхождение текущего символа
		code+=d;
		//code+=' ';
		right->code=parent->code+"1";//Добавим 1 к коду(т.к. он правый элемент)
		out << "Создаем правое поддерево со значением: "<< info<<" с кодом "<<right->code<<" весом "<<right->weight<<endl;
		out << "Добавим в кодовую строку код родителя от которого построен лист с новым символом ("<<parent->code<<") и код первого вхождения символа ("<<d<<")"<<endl;
		out << "Кодовая строка теперь выглядит так: "<<code<<endl;
		left->weight=0;
		left->parent=parent;
		left->code=parent->code+"0";//Добавим 0 к коду (т.к. огн левый элемент)
		out<< "Создаем левое поддерево с кодом "<<left->code<<endl;
		out << "Левое поддерево выбирается новым корнем, от которого будут построены последующие деревья"<<endl;
		parent->lt=left;//Создадим указатели на левый и правый элемент
		parent->rt=right;
		out << "Увеличим веса правого поддерева и всех элементов над ним" << endl;
		UpTree(right);
		return left;
	}
//---------------------------------------
	inline void Codes(binTree &a,string b)
	{//Востанавливаем правильный код всех элементов дерева
		a->code=b;
		if(a->lt)
		{
			b+="0";//Для левых добавляем 0 в код
			Codes(a->lt,b);
			b.resize(b.size()-1);//При подьеме на уровень выше,удаляем последний символ кода
		}
		if(a->rt)
		{
			b+="1";//Для правых добавляем 1 в код
			Codes(a->rt,b);
			b.resize(b.size()-1);//При подьеме на уровень выше,удаляем последний символ кода
		}
	}
//---------------------------------------
	inline void Swap(binTree &a,binTree &b,ofstream& out)
	{//Меняем элементы местами в дереве 
		string codes;
		binTree c;
		c=b->parent;
		if(a->parent==b->parent)//Если они от одного родителя
		{
			if(a->parent->lt==a)
			{
				a->parent->lt=b;//Меняем местами указатели родителя(левое поддерево стало правым, правое левым)
				a->parent->rt=a;
			}
			else
			{
				a->parent->lt=a;//Меняем местами указатели родителя(левое поддерево стало правым, правое левым)
				a->parent->rt=b;
			}
		}
		else//Если они от разных родителей 
		{
			if(a->parent->lt==a)//Если а был левым поддеревом
			{
				a->parent->lt=b;//Поддеревом отца дерева а, стало дерево b
				b->parent=a->parent;//Отцом дерева b,стал отец а
			}
			else//Иначе
			{
				a->parent->rt=b;//Поддеревом отца дерева а, стало дерево b
				b->parent=a->parent;//Отцом дерева b,стал отец а
			}
			if(c->lt==b)//Если b был левым поддервом
			{
				c->lt=a;//Поддеревом отца дерева b, стало дерево а
				a->parent=c;//Отцом дерева а,стал отец b
			}
			else//Иначе
			{
				c->rt=a;//Поддеревом отца дерева b, стало дерево а
				a->parent=c;//Отцом дерева а,стал отец b
			}
		}
		c=a;//Запомнили указатель на дерево а,b
		binTree e=b;
		out <<"Воставновим верную кодировку, такую что у каждого правого поддерева код=код родителя+1, у левого код=код родителя+0"<<endl;
		codes=a->parent->code;
		Codes(a->parent,codes);//востановим кодировку измененного дерева
		codes=b->parent->code;
		Codes(b->parent,codes);//востановим кодировку измененного дерева
		a=a->parent;
		out << "Скоректируем веса, так что вес каждого корня дерева будет равен, сумме весов их левого и правого под дерева"<<endl;
		while(a)//коректируем веса над а
		{
			a->weight=a->lt->weight+a->rt->weight;
			a=a->parent;
		}
		b=b->parent;
		while(b)//коректируем веса над b
		{
			b->weight=b->lt->weight+b->rt->weight;
			b=b->parent;
		}
		a=c;//Востановим изначальные указатели на a и b
		b=e;
	}
//---------------------------------------
	inline void CheckTree(binTree *check,int i,ofstream& out)
	{//Восстановим упорядоченность дерева
		binTree a;
		out << "Проверим, упорядочено ли наше дерево" << endl;
		displayBT1(check[0],1,out);
		for(int j=i;j>0;j--)
		{
			if(check[j]->weight>check[j-1]->weight)//Если найдена ошибка
			{
				int z=j-1;
				out << "Найдены не упорядоченные элементы с (кодом/весом): ("<< check[j]->code<< "/"<< check[j]->weight<<") (" <<check[j-1]->code<<"/"<<check[j-1]->weight<< ")"<<endl;
				out << "Проверим нет ли элемента с весом меньшим чем вес 1го элемента, и находяшегося дальше 2го"<< endl;
				for(int k=j;k>0;k--)//найдем самый дальний элемент, который меньше чем наш текущий
				{
					if(check[j]->weight>check[k-1]->weight) z=k-1;
				}
				if(z!=j-1)
				{
				out << "Такой элемент найден: ("<<check[z]->code<<"/"<<check[z]->weight<<")"<<endl;
				}
				else out << "Такого элемента нет"<< endl;
				out << "Поменяем их местами"<<endl;
				Swap(check[j],check[z],out);//Поменяем эти элементы в дереве
				a=check[j];//Так же поменяем их в массиве
				check[j]=check[z];
				check[z]=a;
				displayBT1(check[0],1,out);
				j=j+2;//Вернемся на 2 шага назад, чтобы проверить, не появилось ли новых ошибок 
			}
		}
	}
//---------------------------------------
	inline void enterBT(string &code,string &ch,ofstream& out,diction slovar[34])//Ввод и конструирование кодирующего дерева с консоли
	{
			int i=0;//Номер последнего считанного элемента дерева
			int step=0;
			int j=0;
			binTree l,m,root;
			binTree check[100];
			m=new node;//Создадим 1й элемент от которого мы будем строить дерево
			m->code="";
			m->weight=0;
			m->parent=0;
			check[i]=m;
			root=m;
			out << "Запустим алгоритм , для первого считанного символа: "<<ch[j]<<endl;
			m=Cons(m,ch[j],check,code,i,out,slovar);//Сконструируем дерево для первого символа(т.к. он точно новый)
			displayBT1(check[0],1,out);
			bool k=false;//Проверка был ли считан данный символ
			j++;
			char c=ch[j];
			while(ch[j])
			{
				c=ch[j];
				out << "Запустим алгоритм , для считанного символа: " <<ch[j]<<" Проверим был ли данный символ уже считан и добавлен в дерево."<<endl;
				for(int q=0;q<i;q++)//Проверяем был ли считан текущий символ
				{
					if(check[q]->info!=0) 
					{
						out << check[q]->info << "и" << ch[j]<<endl;
					}
					if(check[q]->info==ch[j])//Символы совпали
					{
						out << "Символ уже был считан!"<< endl;
						l=check[q];//l- указатель на элемент с данным символом
						k=true;
						break;
					}
				}
				if(k)//Если он уже был
				{ 
					UpTree(l);
					out <<"Увеличим вес листа с данным символом и всех элементов над ним" << endl <<"Добавим в кодовую строку код этого листа: "<<l->code<<endl;
					code+=l->code;// Добавить код текущего символа в строку l->code
					out << "Текущий вид кодовой строки: " << code <<endl;
					CheckTree(check,i,out);//Проверим дерево на упорядоченнность
					k=false;
				}
				else//если его еще не было
				{
					out << "Символ не был считан!" <<endl;
					m=Cons(m,ch[j],check,code,i,out,slovar);//Создадим дерево
					CheckTree(check,i,out);//Проверим дерево на упорядоченность
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
		out1 << "Корнем от которого будут строится под деревья, является элемент с кодом " << parent->code << " и весом=" << parent->weight << endl; 
		right=new node;//Создаем 
		left=new node;//новое левое и правое поддерево
		i++;
		check[i]=right;//Заносим их в массив, чтобы следить за упорядоченностью дерева
		i++;
		check[i]=left;
		right->info=info;//Заполняем правое поддерево
		right->parent=parent;
		right->weight=0;
		right->code=parent->code+"1";
		out1 << "Создаем правое поддерево со значением: " << info << " с кодом " << right->code << " весом=" << right->weight << endl; 
		left->weight=0;//Заполняем левое поддерево 
		left->parent=parent;
		left->code=parent->code+"0";
		out1 << "Создаем левое поддерево с кодом " << left->code << endl;
		parent->lt=left;//Заполняем указатели на левое и правое поддерево их родителя
		parent->rt=right;
		out1 << "Увеличим веса правого поддерева и всех элементов над ним" << endl;
		UpTree(right);
	}
	void enterBT1(string &decode,string &ch,ofstream& out1,diction slovar[34])//Ввод и конструирование раскодирующего дерева с консоли и раскодирующего сообщения
	{	
		int i=0;
		int step=0;
		out1 <<"Начало декодирования! " << endl;
		binTree m,root;
		binTree check[100];
		m=new node;//Создадим 1й элемент от которого мы будем строить дерево
		m->code="";
		m->weight=0;
		m->parent=0;
		check[i]=m;
		root=m;//Он является главным корнем
		Diction(ch,step,out1,slovar);//переведем первый символ из двоичного кода в символ
		out1 << "Запустим алгоритм , для первого считанного символа: " << ch[step] <<  endl;
		out1 << "Добавим его значение в раскодированное сообщение " << endl;
		decode+=ch[step];//Добавим его в раскодированное сообдщение
		Cons1(m,ch[step],check,out1,i);//Создадим дерево
		displayBT1(check[0],1,out1);
		step++;//Перейдем к след. символу
		while(ch[step])
		{
			CheckTree(check,i,out1);//Проверим на упорядоченность
			out1 << "Текущий вид раскодированного сообщения:" << decode << endl;
			m=Dechip(ch,root,step,out1);//Проверим является ли следующий символ считанным или он новый
			if(m->weight==0)//если он новый
			{
				Diction(ch,step,out1,slovar);//переведем первый символ из двоичного кода в символ
				out1 << "Добавим его значение в раскодированное сообщение " << endl;
				decode+=ch[step];//Добавим его в раскодированное сообдщение
				Cons1(m,ch[step],check,out1,i);//Создадим поддерево
				step++;
			}
			else
			{
				out1 << "Добавим в раскодир. строку значение текущего листа: " << m->info << endl;
				decode+=m->info;
				out1 << "Увеличим вес листа с данным символом и всех элементов над ним" << endl;
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
				MessageBox::Show("Файл не был создан или он пуст");	
				exit(1);
			}
			out <<"Сообщение: " << ch<< endl;
			enterBT(code,ch,out,slovar);
			out << "Кодовое дерево создано!" << endl << "Закодированное сообщение: " << code<<endl;;
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
				MessageBox::Show("Файл не был создан или он пуст");	
				exit(1);
			}
			pr1(code);
			out1 << "Сообщение: " << code << endl;
			enterBT1(decode,code,out1,slovar);
			out1 << "Раскодированное сообщение: " << decode << endl;
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
			out << "Введено сообщение:" << ch << endl;
			if(ch.length()==0)  MessageBox::Show("Введите строку");	
			else
			{
				enterBT(code,ch,out,slovar);
				out <<"Кодовое дерево создано!" << endl;
				out << endl << "Закодированное сообщение: " << code << endl;
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
