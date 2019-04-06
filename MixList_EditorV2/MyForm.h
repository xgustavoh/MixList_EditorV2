#pragma once
#include "NPCStruct.h";

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

namespace MixListEditorV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	private: 
		npcCompleto* NPCBase;
		npcCompleto* NPCEdit;
	private: System::Windows::Forms::ComboBox^  cb_item_reqt_8;
	private: System::Windows::Forms::ComboBox^  cb_item_reqt_7;
	private: System::Windows::Forms::ComboBox^  cb_item_reqt_6;
	private: System::Windows::Forms::ComboBox^  cb_item_reqt_5;
	private: System::Windows::Forms::ComboBox^  cb_item_reqt_4;
	private: System::Windows::Forms::ComboBox^  cb_item_reqt_3;
	private: System::Windows::Forms::ComboBox^  cb_item_reqt_2;
	private: System::Windows::Forms::ComboBox^  cb_item_reqt_1;
			 bool salve;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
			this->NPCBase = (npcCompleto*)malloc(sizeof(npcCompleto));
			this->NPCEdit = (npcCompleto*)malloc(sizeof(npcCompleto));
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			/*
			free(this->NPCBase);
			free(this->NPCEdit);
			*/

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  list_NPC;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  tb_NPC_id;


	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::GroupBox^  groupBox4;


	private: System::Windows::Forms::TextBox^  tb_NPC_ItemReq_8;

	private: System::Windows::Forms::Label^  label20;


	private: System::Windows::Forms::TextBox^  tb_NPC_ItemReq_7;

	private: System::Windows::Forms::Label^  label18;


	private: System::Windows::Forms::TextBox^  tb_NPC_ItemReq_6;

	private: System::Windows::Forms::Label^  label17;


	private: System::Windows::Forms::TextBox^  tb_NPC_ItemReq_5;

	private: System::Windows::Forms::Label^  label16;


	private: System::Windows::Forms::TextBox^  tb_NPC_ItemReq_4;

	private: System::Windows::Forms::Label^  label15;


	private: System::Windows::Forms::TextBox^  tb_NPC_ItemReq_2;

	private: System::Windows::Forms::Label^  label12;


	private: System::Windows::Forms::TextBox^  tb_NPC_ItemReq_3;

	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::TextBox^  tb_NPC_ItemReq_1;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  tb_NPC_face;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  tb_NPC_type;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  tb_NPC_mapY;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  tb_NPC_mapX;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  tb_NPC_show_efv3;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  tb_NPC_show_ef3;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tb_NPC_show_efv2;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  tb_NPC_show_ef2;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  tb_NPC_show_efv1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tb_NPC_show_ef1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tb_NPC_show_id;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tb_NPC_gold;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::TextBox^  tb_Item_Req_max3;

	private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  tb_Item_Req_min3;

	private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TextBox^  tb_Item_Req_max2;

	private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  tb_Item_Req_min2;

	private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  tb_Item_Req_max1;

	private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  tb_Item_Req_min1;


	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::TextBox^  tb_Item_efv3;

	private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  tb_Item_ef3;

	private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  tb_Item_efv2;

	private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  tb_Item_ef2;

	private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  tb_Item_efv1;

	private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  tb_Item_ef1;

	private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  tb_Item_ItemID;

	private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  tb_Item_amount;

	private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  tb_Item_strdef;


	private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::ListBox^  list_Item;
private: System::Windows::Forms::TextBox^  tb_Item_id;



	private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Button^  bt_save;

private: System::Windows::Forms::Button^  bt_reset;


private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Button^  bt_load;
private: System::Windows::Forms::OpenFileDialog^  ofd_mixlist;

private: System::Windows::Forms::SaveFileDialog^  sfd_mixlist;


	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->list_NPC = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_NPC_id = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_item_reqt_8 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_item_reqt_7 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_item_reqt_6 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_item_reqt_5 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_item_reqt_4 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_item_reqt_3 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_item_reqt_2 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_item_reqt_1 = (gcnew System::Windows::Forms::ComboBox());
			this->tb_NPC_ItemReq_8 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_ItemReq_7 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_ItemReq_6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_ItemReq_5 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_ItemReq_4 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_ItemReq_2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_ItemReq_3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_ItemReq_1 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_face = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_type = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_NPC_mapY = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_mapX = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_NPC_show_efv3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_show_ef3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_show_efv2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_show_ef2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_show_efv1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_show_ef1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_show_id = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_NPC_gold = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->bt_save = (gcnew System::Windows::Forms::Button());
			this->bt_reset = (gcnew System::Windows::Forms::Button());
			this->bt_load = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_Item_Req_max3 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_Req_min3 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_Req_max2 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_Req_min2 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_Req_max1 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_Req_min1 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_Item_efv3 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_ef3 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_efv2 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_ef2 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_efv1 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_ef1 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_ItemID = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_amount = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tb_Item_strdef = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->list_Item = (gcnew System::Windows::Forms::ListBox());
			this->tb_Item_id = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->ofd_mixlist = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfd_mixlist = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// list_NPC
			// 
			this->list_NPC->FormattingEnabled = true;
			this->list_NPC->Location = System::Drawing::Point(6, 25);
			this->list_NPC->Name = L"list_NPC";
			this->list_NPC->Size = System::Drawing::Size(189, 238);
			this->list_NPC->TabIndex = 0;
			this->list_NPC->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::list_NPC_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tb_NPC_id);
			this->groupBox1->Controls->Add(this->label32);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->list_NPC);
			this->groupBox1->Controls->Add(this->tb_NPC_face);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->tb_NPC_type);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->tb_NPC_gold);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(880, 274);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"NPC";
			// 
			// tb_NPC_id
			// 
			this->tb_NPC_id->Enabled = false;
			this->tb_NPC_id->Location = System::Drawing::Point(261, 19);
			this->tb_NPC_id->Name = L"tb_NPC_id";
			this->tb_NPC_id->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_id->TabIndex = 21;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(212, 22);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(36, 13);
			this->label32->TabIndex = 20;
			this->label32->Text = L"Index:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->cb_item_reqt_8);
			this->groupBox4->Controls->Add(this->cb_item_reqt_7);
			this->groupBox4->Controls->Add(this->cb_item_reqt_6);
			this->groupBox4->Controls->Add(this->cb_item_reqt_5);
			this->groupBox4->Controls->Add(this->cb_item_reqt_4);
			this->groupBox4->Controls->Add(this->cb_item_reqt_3);
			this->groupBox4->Controls->Add(this->cb_item_reqt_2);
			this->groupBox4->Controls->Add(this->cb_item_reqt_1);
			this->groupBox4->Controls->Add(this->tb_NPC_ItemReq_8);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->tb_NPC_ItemReq_7);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->tb_NPC_ItemReq_6);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->tb_NPC_ItemReq_5);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->tb_NPC_ItemReq_4);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->tb_NPC_ItemReq_2);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->tb_NPC_ItemReq_3);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->tb_NPC_ItemReq_1);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Location = System::Drawing::Point(544, 19);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(330, 244);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Item Requeridos:";
			// 
			// cb_item_reqt_8
			// 
			this->cb_item_reqt_8->FormattingEnabled = true;
			this->cb_item_reqt_8->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 - ItemList", L"1 - Lista Interna", L"2 - Soul",
					L"3 - Outros"
			});
			this->cb_item_reqt_8->Location = System::Drawing::Point(201, 208);
			this->cb_item_reqt_8->Name = L"cb_item_reqt_8";
			this->cb_item_reqt_8->Size = System::Drawing::Size(121, 21);
			this->cb_item_reqt_8->TabIndex = 31;
			this->cb_item_reqt_8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_item_reqt_8_SelectedIndexChanged);
			// 
			// cb_item_reqt_7
			// 
			this->cb_item_reqt_7->FormattingEnabled = true;
			this->cb_item_reqt_7->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 - ItemList", L"1 - Lista Interna", L"2 - Soul",
					L"3 - Outros"
			});
			this->cb_item_reqt_7->Location = System::Drawing::Point(201, 181);
			this->cb_item_reqt_7->Name = L"cb_item_reqt_7";
			this->cb_item_reqt_7->Size = System::Drawing::Size(121, 21);
			this->cb_item_reqt_7->TabIndex = 30;
			this->cb_item_reqt_7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_item_reqt_7_SelectedIndexChanged);
			// 
			// cb_item_reqt_6
			// 
			this->cb_item_reqt_6->FormattingEnabled = true;
			this->cb_item_reqt_6->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 - ItemList", L"1 - Lista Interna", L"2 - Soul",
					L"3 - Outros"
			});
			this->cb_item_reqt_6->Location = System::Drawing::Point(201, 156);
			this->cb_item_reqt_6->Name = L"cb_item_reqt_6";
			this->cb_item_reqt_6->Size = System::Drawing::Size(121, 21);
			this->cb_item_reqt_6->TabIndex = 29;
			this->cb_item_reqt_6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_item_reqt_6_SelectedIndexChanged);
			// 
			// cb_item_reqt_5
			// 
			this->cb_item_reqt_5->FormattingEnabled = true;
			this->cb_item_reqt_5->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 - ItemList", L"1 - Lista Interna", L"2 - Soul",
					L"3 - Outros"
			});
			this->cb_item_reqt_5->Location = System::Drawing::Point(201, 130);
			this->cb_item_reqt_5->Name = L"cb_item_reqt_5";
			this->cb_item_reqt_5->Size = System::Drawing::Size(121, 21);
			this->cb_item_reqt_5->TabIndex = 28;
			this->cb_item_reqt_5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_item_reqt_5_SelectedIndexChanged);
			// 
			// cb_item_reqt_4
			// 
			this->cb_item_reqt_4->FormattingEnabled = true;
			this->cb_item_reqt_4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 - ItemList", L"1 - Lista Interna", L"2 - Soul",
					L"3 - Outros"
			});
			this->cb_item_reqt_4->Location = System::Drawing::Point(201, 104);
			this->cb_item_reqt_4->Name = L"cb_item_reqt_4";
			this->cb_item_reqt_4->Size = System::Drawing::Size(121, 21);
			this->cb_item_reqt_4->TabIndex = 27;
			this->cb_item_reqt_4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_item_reqt_4_SelectedIndexChanged);
			// 
			// cb_item_reqt_3
			// 
			this->cb_item_reqt_3->FormattingEnabled = true;
			this->cb_item_reqt_3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 - ItemList", L"1 - Lista Interna", L"2 - Soul",
					L"3 - Outros"
			});
			this->cb_item_reqt_3->Location = System::Drawing::Point(201, 78);
			this->cb_item_reqt_3->Name = L"cb_item_reqt_3";
			this->cb_item_reqt_3->Size = System::Drawing::Size(121, 21);
			this->cb_item_reqt_3->TabIndex = 26;
			this->cb_item_reqt_3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_item_reqt_3_SelectedIndexChanged);
			// 
			// cb_item_reqt_2
			// 
			this->cb_item_reqt_2->FormattingEnabled = true;
			this->cb_item_reqt_2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 - ItemList", L"1 - Lista Interna", L"2 - Soul",
					L"3 - Outros"
			});
			this->cb_item_reqt_2->Location = System::Drawing::Point(201, 52);
			this->cb_item_reqt_2->Name = L"cb_item_reqt_2";
			this->cb_item_reqt_2->Size = System::Drawing::Size(121, 21);
			this->cb_item_reqt_2->TabIndex = 25;
			this->cb_item_reqt_2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_item_reqt_2_SelectedIndexChanged);
			// 
			// cb_item_reqt_1
			// 
			this->cb_item_reqt_1->FormattingEnabled = true;
			this->cb_item_reqt_1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"0 - ItemList", L"1 - Lista Interna", L"2 - Soul",
					L"3 - Outros"
			});
			this->cb_item_reqt_1->Location = System::Drawing::Point(201, 26);
			this->cb_item_reqt_1->Name = L"cb_item_reqt_1";
			this->cb_item_reqt_1->Size = System::Drawing::Size(121, 21);
			this->cb_item_reqt_1->TabIndex = 24;
			this->cb_item_reqt_1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_item_reqt_1_SelectedIndexChanged);
			// 
			// tb_NPC_ItemReq_8
			// 
			this->tb_NPC_ItemReq_8->Location = System::Drawing::Point(54, 208);
			this->tb_NPC_ItemReq_8->Name = L"tb_NPC_ItemReq_8";
			this->tb_NPC_ItemReq_8->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_ItemReq_8->TabIndex = 22;
			this->tb_NPC_ItemReq_8->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_ItemReq_8_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 211);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(39, 13);
			this->label20->TabIndex = 21;
			this->label20->Text = L"Item 8:";
			// 
			// tb_NPC_ItemReq_7
			// 
			this->tb_NPC_ItemReq_7->Location = System::Drawing::Point(54, 182);
			this->tb_NPC_ItemReq_7->Name = L"tb_NPC_ItemReq_7";
			this->tb_NPC_ItemReq_7->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_ItemReq_7->TabIndex = 19;
			this->tb_NPC_ItemReq_7->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_ItemReq_7_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(7, 185);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 13);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Item 7:";
			// 
			// tb_NPC_ItemReq_6
			// 
			this->tb_NPC_ItemReq_6->Location = System::Drawing::Point(54, 156);
			this->tb_NPC_ItemReq_6->Name = L"tb_NPC_ItemReq_6";
			this->tb_NPC_ItemReq_6->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_ItemReq_6->TabIndex = 16;
			this->tb_NPC_ItemReq_6->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_ItemReq_6_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(7, 159);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Item 6:";
			// 
			// tb_NPC_ItemReq_5
			// 
			this->tb_NPC_ItemReq_5->Location = System::Drawing::Point(54, 130);
			this->tb_NPC_ItemReq_5->Name = L"tb_NPC_ItemReq_5";
			this->tb_NPC_ItemReq_5->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_ItemReq_5->TabIndex = 13;
			this->tb_NPC_ItemReq_5->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_ItemReq_5_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(7, 133);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(39, 13);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Item 5:";
			// 
			// tb_NPC_ItemReq_4
			// 
			this->tb_NPC_ItemReq_4->Location = System::Drawing::Point(54, 104);
			this->tb_NPC_ItemReq_4->Name = L"tb_NPC_ItemReq_4";
			this->tb_NPC_ItemReq_4->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_ItemReq_4->TabIndex = 10;
			this->tb_NPC_ItemReq_4->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_ItemReq_4_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(7, 107);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(39, 13);
			this->label15->TabIndex = 9;
			this->label15->Text = L"Item 4:";
			// 
			// tb_NPC_ItemReq_2
			// 
			this->tb_NPC_ItemReq_2->Location = System::Drawing::Point(54, 52);
			this->tb_NPC_ItemReq_2->Name = L"tb_NPC_ItemReq_2";
			this->tb_NPC_ItemReq_2->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_ItemReq_2->TabIndex = 7;
			this->tb_NPC_ItemReq_2->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_ItemReq_2_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 55);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Item 2:";
			// 
			// tb_NPC_ItemReq_3
			// 
			this->tb_NPC_ItemReq_3->Location = System::Drawing::Point(54, 78);
			this->tb_NPC_ItemReq_3->Name = L"tb_NPC_ItemReq_3";
			this->tb_NPC_ItemReq_3->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_ItemReq_3->TabIndex = 4;
			this->tb_NPC_ItemReq_3->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_ItemReq_3_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(7, 81);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 13);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Item 3:";
			// 
			// tb_NPC_ItemReq_1
			// 
			this->tb_NPC_ItemReq_1->Location = System::Drawing::Point(54, 26);
			this->tb_NPC_ItemReq_1->Name = L"tb_NPC_ItemReq_1";
			this->tb_NPC_ItemReq_1->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_ItemReq_1->TabIndex = 1;
			this->tb_NPC_ItemReq_1->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_ItemReq_1_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(7, 29);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Item 1:";
			// 
			// tb_NPC_face
			// 
			this->tb_NPC_face->Location = System::Drawing::Point(422, 19);
			this->tb_NPC_face->Name = L"tb_NPC_face";
			this->tb_NPC_face->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_face->TabIndex = 17;
			this->tb_NPC_face->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_face_TextChanged);
			this->tb_NPC_face->Leave += gcnew System::EventHandler(this, &MyForm::tb_NPC_face_Leave);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(373, 22);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Face:";
			// 
			// tb_NPC_type
			// 
			this->tb_NPC_type->Location = System::Drawing::Point(422, 45);
			this->tb_NPC_type->Name = L"tb_NPC_type";
			this->tb_NPC_type->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_type->TabIndex = 15;
			this->tb_NPC_type->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_type_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(375, 48);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Tipo:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tb_NPC_mapY);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->tb_NPC_mapX);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Location = System::Drawing::Point(208, 71);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(330, 52);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Posição Mapa:";
			// 
			// tb_NPC_mapY
			// 
			this->tb_NPC_mapY->Location = System::Drawing::Point(216, 19);
			this->tb_NPC_mapY->Name = L"tb_NPC_mapY";
			this->tb_NPC_mapY->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_mapY->TabIndex = 5;
			this->tb_NPC_mapY->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_mapY_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(169, 22);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Y:";
			// 
			// tb_NPC_mapX
			// 
			this->tb_NPC_mapX->Location = System::Drawing::Point(53, 19);
			this->tb_NPC_mapX->Name = L"tb_NPC_mapX";
			this->tb_NPC_mapX->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_mapX->TabIndex = 3;
			this->tb_NPC_mapX->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_mapX_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 22);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(17, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"X:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tb_NPC_show_efv3);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->tb_NPC_show_ef3);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->tb_NPC_show_efv2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->tb_NPC_show_ef2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->tb_NPC_show_efv1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->tb_NPC_show_ef1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->tb_NPC_show_id);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(208, 129);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(330, 134);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Item Show:";
			// 
			// tb_NPC_show_efv3
			// 
			this->tb_NPC_show_efv3->Location = System::Drawing::Point(216, 97);
			this->tb_NPC_show_efv3->Name = L"tb_NPC_show_efv3";
			this->tb_NPC_show_efv3->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_show_efv3->TabIndex = 13;
			this->tb_NPC_show_efv3->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_show_efv3_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(169, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"EFV_3:";
			// 
			// tb_NPC_show_ef3
			// 
			this->tb_NPC_show_ef3->Location = System::Drawing::Point(53, 97);
			this->tb_NPC_show_ef3->Name = L"tb_NPC_show_ef3";
			this->tb_NPC_show_ef3->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_show_ef3->TabIndex = 11;
			this->tb_NPC_show_ef3->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_show_ef3_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 100);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"EF_3:";
			// 
			// tb_NPC_show_efv2
			// 
			this->tb_NPC_show_efv2->Location = System::Drawing::Point(216, 71);
			this->tb_NPC_show_efv2->Name = L"tb_NPC_show_efv2";
			this->tb_NPC_show_efv2->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_show_efv2->TabIndex = 9;
			this->tb_NPC_show_efv2->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_show_efv2_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(169, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"EFV_2:";
			// 
			// tb_NPC_show_ef2
			// 
			this->tb_NPC_show_ef2->Location = System::Drawing::Point(53, 71);
			this->tb_NPC_show_ef2->Name = L"tb_NPC_show_ef2";
			this->tb_NPC_show_ef2->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_show_ef2->TabIndex = 7;
			this->tb_NPC_show_ef2->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_show_ef2_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"EF_2:";
			// 
			// tb_NPC_show_efv1
			// 
			this->tb_NPC_show_efv1->Location = System::Drawing::Point(216, 45);
			this->tb_NPC_show_efv1->Name = L"tb_NPC_show_efv1";
			this->tb_NPC_show_efv1->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_show_efv1->TabIndex = 5;
			this->tb_NPC_show_efv1->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_show_efv1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(169, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"EFV_1:";
			// 
			// tb_NPC_show_ef1
			// 
			this->tb_NPC_show_ef1->Location = System::Drawing::Point(53, 45);
			this->tb_NPC_show_ef1->Name = L"tb_NPC_show_ef1";
			this->tb_NPC_show_ef1->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_show_ef1->TabIndex = 3;
			this->tb_NPC_show_ef1->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_show_ef1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"EF_1:";
			// 
			// tb_NPC_show_id
			// 
			this->tb_NPC_show_id->Location = System::Drawing::Point(53, 19);
			this->tb_NPC_show_id->Name = L"tb_NPC_show_id";
			this->tb_NPC_show_id->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_show_id->TabIndex = 1;
			this->tb_NPC_show_id->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_show_id_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ItemID:";
			// 
			// tb_NPC_gold
			// 
			this->tb_NPC_gold->Location = System::Drawing::Point(261, 45);
			this->tb_NPC_gold->Name = L"tb_NPC_gold";
			this->tb_NPC_gold->Size = System::Drawing::Size(105, 20);
			this->tb_NPC_gold->TabIndex = 1;
			this->tb_NPC_gold->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_NPC_gold_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(212, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gold:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->bt_save);
			this->groupBox5->Controls->Add(this->bt_reset);
			this->groupBox5->Controls->Add(this->bt_load);
			this->groupBox5->Controls->Add(this->label39);
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->groupBox6);
			this->groupBox5->Controls->Add(this->tb_Item_amount);
			this->groupBox5->Controls->Add(this->label23);
			this->groupBox5->Controls->Add(this->tb_Item_strdef);
			this->groupBox5->Controls->Add(this->label24);
			this->groupBox5->Controls->Add(this->list_Item);
			this->groupBox5->Controls->Add(this->tb_Item_id);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Location = System::Drawing::Point(12, 293);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(880, 227);
			this->groupBox5->TabIndex = 2;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Itemlista Interna";
			// 
			// bt_save
			// 
			this->bt_save->Enabled = false;
			this->bt_save->Location = System::Drawing::Point(709, 127);
			this->bt_save->Name = L"bt_save";
			this->bt_save->Size = System::Drawing::Size(159, 81);
			this->bt_save->TabIndex = 32;
			this->bt_save->Text = L"Salvar";
			this->bt_save->UseVisualStyleBackColor = true;
			this->bt_save->Click += gcnew System::EventHandler(this, &MyForm::bt_save_Click);
			// 
			// bt_reset
			// 
			this->bt_reset->Enabled = false;
			this->bt_reset->Location = System::Drawing::Point(544, 184);
			this->bt_reset->Name = L"bt_reset";
			this->bt_reset->Size = System::Drawing::Size(159, 24);
			this->bt_reset->TabIndex = 31;
			this->bt_reset->Text = L"Reset";
			this->bt_reset->UseVisualStyleBackColor = true;
			this->bt_reset->Click += gcnew System::EventHandler(this, &MyForm::bt_reset_Click);
			// 
			// bt_load
			// 
			this->bt_load->Location = System::Drawing::Point(544, 126);
			this->bt_load->Name = L"bt_load";
			this->bt_load->Size = System::Drawing::Size(159, 49);
			this->bt_load->TabIndex = 30;
			this->bt_load->Text = L"Carregar";
			this->bt_load->UseVisualStyleBackColor = true;
			this->bt_load->Click += gcnew System::EventHandler(this, &MyForm::bt_load_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(760, 211);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(114, 13);
			this->label39->TabIndex = 29;
			this->label39->Text = L"Criado por: xGustavoH";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->tb_Item_Req_max3);
			this->groupBox7->Controls->Add(this->label33);
			this->groupBox7->Controls->Add(this->tb_Item_Req_min3);
			this->groupBox7->Controls->Add(this->label34);
			this->groupBox7->Controls->Add(this->tb_Item_Req_max2);
			this->groupBox7->Controls->Add(this->label35);
			this->groupBox7->Controls->Add(this->tb_Item_Req_min2);
			this->groupBox7->Controls->Add(this->label36);
			this->groupBox7->Controls->Add(this->tb_Item_Req_max1);
			this->groupBox7->Controls->Add(this->label37);
			this->groupBox7->Controls->Add(this->tb_Item_Req_min1);
			this->groupBox7->Controls->Add(this->label38);
			this->groupBox7->Location = System::Drawing::Point(544, 11);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(330, 108);
			this->groupBox7->TabIndex = 28;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Intervalo:";
			// 
			// tb_Item_Req_max3
			// 
			this->tb_Item_Req_max3->Location = System::Drawing::Point(217, 71);
			this->tb_Item_Req_max3->Name = L"tb_Item_Req_max3";
			this->tb_Item_Req_max3->Size = System::Drawing::Size(105, 20);
			this->tb_Item_Req_max3->TabIndex = 13;
			this->tb_Item_Req_max3->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_Req_max3_TextChanged);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(170, 74);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(45, 13);
			this->label33->TabIndex = 12;
			this->label33->Text = L"MAX_3:";
			// 
			// tb_Item_Req_min3
			// 
			this->tb_Item_Req_min3->Location = System::Drawing::Point(54, 71);
			this->tb_Item_Req_min3->Name = L"tb_Item_Req_min3";
			this->tb_Item_Req_min3->Size = System::Drawing::Size(105, 20);
			this->tb_Item_Req_min3->TabIndex = 11;
			this->tb_Item_Req_min3->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_Req_min3_TextChanged);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(7, 74);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(42, 13);
			this->label34->TabIndex = 10;
			this->label34->Text = L"MIN_3:";
			// 
			// tb_Item_Req_max2
			// 
			this->tb_Item_Req_max2->Location = System::Drawing::Point(217, 45);
			this->tb_Item_Req_max2->Name = L"tb_Item_Req_max2";
			this->tb_Item_Req_max2->Size = System::Drawing::Size(105, 20);
			this->tb_Item_Req_max2->TabIndex = 9;
			this->tb_Item_Req_max2->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_Req_max2_TextChanged);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(170, 48);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(45, 13);
			this->label35->TabIndex = 8;
			this->label35->Text = L"MAX_2:";
			// 
			// tb_Item_Req_min2
			// 
			this->tb_Item_Req_min2->Location = System::Drawing::Point(54, 45);
			this->tb_Item_Req_min2->Name = L"tb_Item_Req_min2";
			this->tb_Item_Req_min2->Size = System::Drawing::Size(105, 20);
			this->tb_Item_Req_min2->TabIndex = 7;
			this->tb_Item_Req_min2->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_Req_min2_TextChanged);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(7, 48);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(42, 13);
			this->label36->TabIndex = 6;
			this->label36->Text = L"MIN_2:";
			// 
			// tb_Item_Req_max1
			// 
			this->tb_Item_Req_max1->Location = System::Drawing::Point(217, 19);
			this->tb_Item_Req_max1->Name = L"tb_Item_Req_max1";
			this->tb_Item_Req_max1->Size = System::Drawing::Size(105, 20);
			this->tb_Item_Req_max1->TabIndex = 5;
			this->tb_Item_Req_max1->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_Req_max1_TextChanged);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(170, 22);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(45, 13);
			this->label37->TabIndex = 4;
			this->label37->Text = L"MAX_1:";
			// 
			// tb_Item_Req_min1
			// 
			this->tb_Item_Req_min1->Location = System::Drawing::Point(54, 19);
			this->tb_Item_Req_min1->Name = L"tb_Item_Req_min1";
			this->tb_Item_Req_min1->Size = System::Drawing::Size(105, 20);
			this->tb_Item_Req_min1->TabIndex = 3;
			this->tb_Item_Req_min1->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_Req_min1_TextChanged);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(7, 22);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(42, 13);
			this->label38->TabIndex = 2;
			this->label38->Text = L"MIN_1:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(261, 72);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(19, 13);
			this->label21->TabIndex = 27;
			this->label21->Text = L"....";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->tb_Item_efv3);
			this->groupBox6->Controls->Add(this->label25);
			this->groupBox6->Controls->Add(this->tb_Item_ef3);
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Controls->Add(this->tb_Item_efv2);
			this->groupBox6->Controls->Add(this->label27);
			this->groupBox6->Controls->Add(this->tb_Item_ef2);
			this->groupBox6->Controls->Add(this->label28);
			this->groupBox6->Controls->Add(this->tb_Item_efv1);
			this->groupBox6->Controls->Add(this->label29);
			this->groupBox6->Controls->Add(this->tb_Item_ef1);
			this->groupBox6->Controls->Add(this->label30);
			this->groupBox6->Controls->Add(this->tb_Item_ItemID);
			this->groupBox6->Controls->Add(this->label31);
			this->groupBox6->Location = System::Drawing::Point(202, 84);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(330, 134);
			this->groupBox6->TabIndex = 26;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Item:";
			// 
			// tb_Item_efv3
			// 
			this->tb_Item_efv3->Location = System::Drawing::Point(216, 97);
			this->tb_Item_efv3->Name = L"tb_Item_efv3";
			this->tb_Item_efv3->Size = System::Drawing::Size(105, 20);
			this->tb_Item_efv3->TabIndex = 13;
			this->tb_Item_efv3->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_efv3_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(169, 100);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(42, 13);
			this->label25->TabIndex = 12;
			this->label25->Text = L"EFV_3:";
			// 
			// tb_Item_ef3
			// 
			this->tb_Item_ef3->Location = System::Drawing::Point(53, 97);
			this->tb_Item_ef3->Name = L"tb_Item_ef3";
			this->tb_Item_ef3->Size = System::Drawing::Size(105, 20);
			this->tb_Item_ef3->TabIndex = 11;
			this->tb_Item_ef3->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_ef3_TextChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(6, 100);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(35, 13);
			this->label26->TabIndex = 10;
			this->label26->Text = L"EF_3:";
			// 
			// tb_Item_efv2
			// 
			this->tb_Item_efv2->Location = System::Drawing::Point(216, 71);
			this->tb_Item_efv2->Name = L"tb_Item_efv2";
			this->tb_Item_efv2->Size = System::Drawing::Size(105, 20);
			this->tb_Item_efv2->TabIndex = 9;
			this->tb_Item_efv2->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_efv2_TextChanged);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(169, 74);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(42, 13);
			this->label27->TabIndex = 8;
			this->label27->Text = L"EFV_2:";
			// 
			// tb_Item_ef2
			// 
			this->tb_Item_ef2->Location = System::Drawing::Point(53, 71);
			this->tb_Item_ef2->Name = L"tb_Item_ef2";
			this->tb_Item_ef2->Size = System::Drawing::Size(105, 20);
			this->tb_Item_ef2->TabIndex = 7;
			this->tb_Item_ef2->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_ef2_TextChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(6, 74);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(35, 13);
			this->label28->TabIndex = 6;
			this->label28->Text = L"EF_2:";
			// 
			// tb_Item_efv1
			// 
			this->tb_Item_efv1->Location = System::Drawing::Point(216, 45);
			this->tb_Item_efv1->Name = L"tb_Item_efv1";
			this->tb_Item_efv1->Size = System::Drawing::Size(105, 20);
			this->tb_Item_efv1->TabIndex = 5;
			this->tb_Item_efv1->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_efv1_TextChanged);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(169, 48);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(42, 13);
			this->label29->TabIndex = 4;
			this->label29->Text = L"EFV_1:";
			// 
			// tb_Item_ef1
			// 
			this->tb_Item_ef1->Location = System::Drawing::Point(53, 45);
			this->tb_Item_ef1->Name = L"tb_Item_ef1";
			this->tb_Item_ef1->Size = System::Drawing::Size(105, 20);
			this->tb_Item_ef1->TabIndex = 3;
			this->tb_Item_ef1->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_ef1_TextChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(6, 48);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(35, 13);
			this->label30->TabIndex = 2;
			this->label30->Text = L"EF_1:";
			// 
			// tb_Item_ItemID
			// 
			this->tb_Item_ItemID->Location = System::Drawing::Point(53, 19);
			this->tb_Item_ItemID->Name = L"tb_Item_ItemID";
			this->tb_Item_ItemID->Size = System::Drawing::Size(105, 20);
			this->tb_Item_ItemID->TabIndex = 1;
			this->tb_Item_ItemID->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_ItemID_TextChanged);
			this->tb_Item_ItemID->Leave += gcnew System::EventHandler(this, &MyForm::tb_Item_ItemID_Leave);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(6, 22);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(41, 13);
			this->label31->TabIndex = 0;
			this->label31->Text = L"ItemID:";
			// 
			// tb_Item_amount
			// 
			this->tb_Item_amount->Location = System::Drawing::Point(422, 45);
			this->tb_Item_amount->Name = L"tb_Item_amount";
			this->tb_Item_amount->Size = System::Drawing::Size(105, 20);
			this->tb_Item_amount->TabIndex = 25;
			this->tb_Item_amount->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_amount_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(375, 48);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(42, 13);
			this->label23->TabIndex = 24;
			this->label23->Text = L"Quant.:";
			// 
			// tb_Item_strdef
			// 
			this->tb_Item_strdef->Location = System::Drawing::Point(261, 45);
			this->tb_Item_strdef->Name = L"tb_Item_strdef";
			this->tb_Item_strdef->Size = System::Drawing::Size(105, 20);
			this->tb_Item_strdef->TabIndex = 23;
			this->tb_Item_strdef->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_Item_strdef_TextChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(212, 48);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(38, 13);
			this->label24->TabIndex = 22;
			this->label24->Text = L"Strdef:";
			// 
			// list_Item
			// 
			this->list_Item->FormattingEnabled = true;
			this->list_Item->Location = System::Drawing::Point(6, 19);
			this->list_Item->Name = L"list_Item";
			this->list_Item->Size = System::Drawing::Size(189, 199);
			this->list_Item->TabIndex = 18;
			this->list_Item->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::list_Item_SelectedIndexChanged);
			// 
			// tb_Item_id
			// 
			this->tb_Item_id->Enabled = false;
			this->tb_Item_id->Location = System::Drawing::Point(261, 19);
			this->tb_Item_id->Name = L"tb_Item_id";
			this->tb_Item_id->Size = System::Drawing::Size(105, 20);
			this->tb_Item_id->TabIndex = 19;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(212, 22);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(36, 13);
			this->label22->TabIndex = 18;
			this->label22->Text = L"Index:";
			// 
			// ofd_mixlist
			// 
			this->ofd_mixlist->Filter = L"MixList (*.bin)|*.bin";
			this->ofd_mixlist->Title = L"Selecione o Mixlist";
			// 
			// sfd_mixlist
			// 
			this->sfd_mixlist->DefaultExt = L"bin";
			this->sfd_mixlist->FileName = L"Mixlist.bin";
			this->sfd_mixlist->Filter = L"MixList (*.bin)|*.bin";
			this->sfd_mixlist->Title = L"Salvar Mixlist";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 532);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MixList Editor V1.0 - xGustavoH";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;

		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();

		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	private: System::Void bt_load_Click(System::Object^  sender, System::EventArgs^  e) {
		/* Carrega o Arquivo Binario! */

		if (this->ofd_mixlist->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			string filename;
			this->MarshalString(this->ofd_mixlist->FileName, filename);

			ifstream inbal(filename, ios::in | ios::binary);
			if (!inbal) {
				std::cout << "Cannot open file.\n" << endl;
				return;
			}

			npcCompleto NPCFile;			
			inbal.read((char *)&NPCFile, sizeof(npcCompleto));
			inbal.close();

			memcpy(this->NPCBase, &NPCFile, sizeof(npcCompleto));
			memcpy(this->NPCEdit, &NPCFile, sizeof(npcCompleto));

			this->list_NPC->SelectedIndex = -1;
			this->list_Item->SelectedIndex = -1;

			displayList();
			displayNPCSelect();
			displayItemSelect();

			this->bt_save->Enabled = true;
			this->bt_reset->Enabled = true;
		}
	}

	private: System::Void bt_reset_Click(System::Object^  sender, System::EventArgs^  e) {
		/* Reseta todos os dados para o 'original' (Arquivo binario carregado) */

		memcpy(this->NPCEdit, this->NPCBase, sizeof(npcCompleto));
		displayList();
		displayNPCSelect();
		displayItemSelect();
	}

	private: System::Void bt_save_Click(System::Object^  sender, System::EventArgs^  e) {
		/* Salva o Arquivo Binario */

		if (this->sfd_mixlist->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			string filename;
			this->MarshalString(this->sfd_mixlist->FileName, filename);

			ofstream inbal(filename, ios::out | ios::binary);
			if (!inbal) {
				std::cout << "Cannot open file.\n" << endl;
				return;
			}

			npcCompleto NPCFile = *this->NPCEdit;
			inbal.write((char *)&NPCFile, sizeof(npcCompleto));
			inbal.close();
		}
	}

	private: System::Void displayList() {
		this->list_NPC->Items->Clear();
		this->list_Item->Items->Clear();
		for (int i = 0; i < 100; i++) {
			this->list_NPC->Items->Add("#Index_" + i + " [Face: " + this->NPCEdit->npcs[i].face + "]");
			this->list_Item->Items->Add("#Item_" + i + " [Item: " + this->NPCEdit->Req[i].item.Index + "]");
		}
	}

	private: System::Void displayNPCSelect() {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			// Informações basica do NPC
			this->tb_NPC_id->Text = ""+id;
			this->tb_NPC_face->Text = "" + this->NPCEdit->npcs[id].face;
			this->tb_NPC_gold->Text = "" + this->NPCEdit->npcs[id].Gold;
			this->tb_NPC_type->Text = "" + this->NPCEdit->npcs[id].Type;

			// Posição no Mapa
			this->tb_NPC_mapX->Text = "" + this->NPCEdit->npcs[id].MapX;
			this->tb_NPC_mapY->Text = "" + this->NPCEdit->npcs[id].MapY;

			// Item Show (Item de visualização)
			this->tb_NPC_show_id->Text = "" + this->NPCEdit->npcs[id].ItemShow.Index;
			this->tb_NPC_show_ef1->Text = "" + this->NPCEdit->npcs[id].ItemShow.EF1;
			this->tb_NPC_show_efv1->Text = "" + this->NPCEdit->npcs[id].ItemShow.EFV1;
			this->tb_NPC_show_ef2->Text = "" + this->NPCEdit->npcs[id].ItemShow.EF2;
			this->tb_NPC_show_efv2->Text = "" + this->NPCEdit->npcs[id].ItemShow.EFV2;
			this->tb_NPC_show_ef3->Text = "" + this->NPCEdit->npcs[id].ItemShow.EF3;
			this->tb_NPC_show_efv3->Text = "" + this->NPCEdit->npcs[id].ItemShow.EFV3;

			// Items para Composição
			this->tb_NPC_ItemReq_1->Text = "" + this->NPCEdit->npcs[id].reqItem[0].ItemID;
			this->tb_NPC_ItemReq_2->Text = "" + this->NPCEdit->npcs[id].reqItem[1].ItemID;
			this->tb_NPC_ItemReq_3->Text = "" + this->NPCEdit->npcs[id].reqItem[2].ItemID;
			this->tb_NPC_ItemReq_4->Text = "" + this->NPCEdit->npcs[id].reqItem[3].ItemID;
			this->tb_NPC_ItemReq_5->Text = "" + this->NPCEdit->npcs[id].reqItem[4].ItemID;
			this->tb_NPC_ItemReq_6->Text = "" + this->NPCEdit->npcs[id].reqItem[5].ItemID;
			this->tb_NPC_ItemReq_7->Text = "" + this->NPCEdit->npcs[id].reqItem[6].ItemID;
			this->tb_NPC_ItemReq_8->Text = "" + this->NPCEdit->npcs[id].reqItem[7].ItemID;

			// Items para Composição (Combobox)
			this->cb_item_reqt_1->SelectedIndex = this->NPCEdit->npcs[id].reqItem[0].isNotItemList >= 0 ? this->NPCEdit->npcs[id].reqItem[0].isNotItemList : 0;
			this->cb_item_reqt_2->SelectedIndex = this->NPCEdit->npcs[id].reqItem[1].isNotItemList >= 0 ? this->NPCEdit->npcs[id].reqItem[1].isNotItemList : 0;
			this->cb_item_reqt_3->SelectedIndex = this->NPCEdit->npcs[id].reqItem[2].isNotItemList >= 0 ? this->NPCEdit->npcs[id].reqItem[2].isNotItemList : 0;
			this->cb_item_reqt_4->SelectedIndex = this->NPCEdit->npcs[id].reqItem[3].isNotItemList >= 0 ? this->NPCEdit->npcs[id].reqItem[3].isNotItemList : 0;
			this->cb_item_reqt_5->SelectedIndex = this->NPCEdit->npcs[id].reqItem[4].isNotItemList >= 0 ? this->NPCEdit->npcs[id].reqItem[4].isNotItemList : 0;
			this->cb_item_reqt_6->SelectedIndex = this->NPCEdit->npcs[id].reqItem[5].isNotItemList >= 0 ? this->NPCEdit->npcs[id].reqItem[5].isNotItemList : 0;
			this->cb_item_reqt_7->SelectedIndex = this->NPCEdit->npcs[id].reqItem[6].isNotItemList >= 0 ? this->NPCEdit->npcs[id].reqItem[6].isNotItemList : 0;
			this->cb_item_reqt_8->SelectedIndex = this->NPCEdit->npcs[id].reqItem[7].isNotItemList >= 0 ? this->NPCEdit->npcs[id].reqItem[7].isNotItemList : 0;
		} else {
			this->tb_NPC_id->Text = "";
			this->tb_NPC_face->Text = "";
			this->tb_NPC_gold->Text = "";
			this->tb_NPC_type->Text = "";

			// Posição no Mapa
			this->tb_NPC_mapX->Text = "";
			this->tb_NPC_mapY->Text = "";

			// Item Show (Item de visualização)
			this->tb_NPC_show_id->Text = "";
			this->tb_NPC_show_ef1->Text = "";
			this->tb_NPC_show_efv1->Text = "";
			this->tb_NPC_show_ef2->Text = "";
			this->tb_NPC_show_efv2->Text = "";
			this->tb_NPC_show_ef3->Text = "";
			this->tb_NPC_show_efv3->Text = "";

			// Items para Composição
			this->tb_NPC_ItemReq_1->Text = "";
			this->tb_NPC_ItemReq_2->Text = "";
			this->tb_NPC_ItemReq_3->Text = "";
			this->tb_NPC_ItemReq_4->Text = "";
			this->tb_NPC_ItemReq_5->Text = "";
			this->tb_NPC_ItemReq_6->Text = "";
			this->tb_NPC_ItemReq_7->Text = "";
			this->tb_NPC_ItemReq_8->Text = "";

			// Items para Composição (Combobox)
			this->cb_item_reqt_1->SelectedIndex = 0;
			this->cb_item_reqt_2->SelectedIndex = 0;
			this->cb_item_reqt_3->SelectedIndex = 0;
			this->cb_item_reqt_4->SelectedIndex = 0;
			this->cb_item_reqt_5->SelectedIndex = 0;
			this->cb_item_reqt_6->SelectedIndex = 0;
			this->cb_item_reqt_7->SelectedIndex = 0;
			this->cb_item_reqt_8->SelectedIndex = 0;
		}
	}

	private: System::Void displayItemSelect() {
		int id = this->list_Item->SelectedIndex;
		if (id >= 0 && id < 100) {
			// Informações basicas
			this->tb_Item_id->Text = "" + id;
			this->tb_Item_strdef->Text = "" + this->NPCEdit->Req[id].Strdef;
			this->tb_Item_amount->Text = "" + this->NPCEdit->Req[id].Amount;

			// Intervalor *Não sei oq é*
			this->tb_Item_Req_min1->Text = "" + this->NPCEdit->Req[id].Interval[0].MinID;
			this->tb_Item_Req_max1->Text = "" + this->NPCEdit->Req[id].Interval[0].MaxID;
			this->tb_Item_Req_min2->Text = "" + this->NPCEdit->Req[id].Interval[1].MinID;
			this->tb_Item_Req_max2->Text = "" + this->NPCEdit->Req[id].Interval[1].MaxID;
			this->tb_Item_Req_min3->Text = "" + this->NPCEdit->Req[id].Interval[2].MinID;
			this->tb_Item_Req_max3->Text = "" + this->NPCEdit->Req[id].Interval[2].MaxID;

			// Item
			this->tb_Item_ItemID->Text = "" + this->NPCEdit->Req[id].item.Index;
			this->tb_Item_ef1->Text = "" + this->NPCEdit->Req[id].item.EF1;
			this->tb_Item_efv1->Text = "" + this->NPCEdit->Req[id].item.EFV1;
			this->tb_Item_ef2->Text = "" + this->NPCEdit->Req[id].item.EF2;
			this->tb_Item_efv2->Text = "" + this->NPCEdit->Req[id].item.EFV2;
			this->tb_Item_ef3->Text = "" + this->NPCEdit->Req[id].item.EF3;
			this->tb_Item_efv3->Text = "" + this->NPCEdit->Req[id].item.EFV3;
		} else {
			// Informações basicas
			this->tb_Item_id->Text = "";
			this->tb_Item_strdef->Text = "";
			this->tb_Item_amount->Text = "";

			// Intervalor *Não sei oq é*
			this->tb_Item_Req_min1->Text = "";
			this->tb_Item_Req_max1->Text = "";
			this->tb_Item_Req_min2->Text = "";
			this->tb_Item_Req_max2->Text = "";
			this->tb_Item_Req_min3->Text = "";
			this->tb_Item_Req_max3->Text = "";

			// Item
			this->tb_Item_ItemID->Text = "";
			this->tb_Item_ef1->Text = "";
			this->tb_Item_efv1->Text = "";
			this->tb_Item_ef2->Text = "";
			this->tb_Item_efv2->Text = "";
			this->tb_Item_ef3->Text = "";
			this->tb_Item_efv3->Text = "";
		}
	}

	private: System::Void list_NPC_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		displayNPCSelect();
	}

	// Edita os valores da Strutura! (Aqui vai coisa pra krl!)
	private: System::Void tb_NPC_face_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_face->Text, valor)) {
			this->NPCEdit->npcs[id].face = valor;
		}
	}
	private: System::Void tb_NPC_face_Leave(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			this->list_NPC->Items[id] = "#Index_" + id + " [Face: " + this->NPCEdit->npcs[id].face + "]";
		}
	}
	private: System::Void tb_NPC_gold_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_gold->Text, valor)) {
			this->NPCEdit->npcs[id].Gold = valor;
		}
	}
	private: System::Void tb_NPC_type_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		short valor = 0;
		if (id >= 0 && id < 100 && short::TryParse(this->tb_NPC_type->Text, valor)) {
			this->NPCEdit->npcs[id].Type = valor;
		}
	}
	private: System::Void tb_NPC_mapX_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_mapX->Text, valor)) {
			this->NPCEdit->npcs[id].MapX = valor;
		}
	}
	private: System::Void tb_NPC_mapY_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_mapY->Text, valor)) {
			this->NPCEdit->npcs[id].MapY = valor;
		}
	}
	private: System::Void tb_NPC_show_id_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_show_id->Text, valor)) {
			this->NPCEdit->npcs[id].ItemShow.Index = valor;
		}
	}
	private: System::Void tb_NPC_show_ef1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_show_ef1->Text, valor)) {
			this->NPCEdit->npcs[id].ItemShow.EF1 = valor;
		}
	}
	private: System::Void tb_NPC_show_efv1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_show_efv1->Text, valor)) {
			this->NPCEdit->npcs[id].ItemShow.EFV1 = valor;
		}
	}
	private: System::Void tb_NPC_show_ef2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_show_ef2->Text, valor)) {
			this->NPCEdit->npcs[id].ItemShow.EF2 = valor;
		}
	}
	private: System::Void tb_NPC_show_efv2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_show_efv2->Text, valor)) {
			this->NPCEdit->npcs[id].ItemShow.EFV2 = valor;
		}
	}
	private: System::Void tb_NPC_show_ef3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_show_ef3->Text, valor)) {
			this->NPCEdit->npcs[id].ItemShow.EF3 = valor;
		}
	}
	private: System::Void tb_NPC_show_efv3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_show_efv3->Text, valor)) {
			this->NPCEdit->npcs[id].ItemShow.EFV3 = valor;
		}
	}
	private: System::Void tb_NPC_ItemReq_1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_ItemReq_1->Text, valor)) {
			this->NPCEdit->npcs[id].reqItem[0].ItemID = valor;
		}
	}
	private: System::Void tb_NPC_ItemReq_2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_ItemReq_2->Text, valor)) {
			this->NPCEdit->npcs[id].reqItem[1].ItemID = valor;
		}
	}
	private: System::Void tb_NPC_ItemReq_3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_ItemReq_3->Text, valor)) {
			this->NPCEdit->npcs[id].reqItem[2].ItemID = valor;
		}
	}
	private: System::Void tb_NPC_ItemReq_4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_ItemReq_4->Text, valor)) {
			this->NPCEdit->npcs[id].reqItem[3].ItemID = valor;
		}
	}
	private: System::Void tb_NPC_ItemReq_5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_ItemReq_5->Text, valor)) {
			this->NPCEdit->npcs[id].reqItem[4].ItemID = valor;
		}
	}
	private: System::Void tb_NPC_ItemReq_6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_ItemReq_6->Text, valor)) {
			this->NPCEdit->npcs[id].reqItem[5].ItemID = valor;
		}
	}
	private: System::Void tb_NPC_ItemReq_7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_ItemReq_7->Text, valor)) {
			this->NPCEdit->npcs[id].reqItem[6].ItemID = valor;
		}
	}
	private: System::Void tb_NPC_ItemReq_8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_NPC_ItemReq_8->Text, valor)) {
			this->NPCEdit->npcs[id].reqItem[7].ItemID = valor;
		}
	}


	private: System::Void cb_item_reqt_1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			this->NPCEdit->npcs[id].reqItem[0].isNotItemList = this->cb_item_reqt_1->SelectedIndex;
		}
	}
	private: System::Void cb_item_reqt_2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			this->NPCEdit->npcs[id].reqItem[1].isNotItemList = this->cb_item_reqt_2->SelectedIndex;
		}
	}
	private: System::Void cb_item_reqt_3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			this->NPCEdit->npcs[id].reqItem[2].isNotItemList = this->cb_item_reqt_3->SelectedIndex;
		}
	}
	private: System::Void cb_item_reqt_4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			this->NPCEdit->npcs[id].reqItem[3].isNotItemList = this->cb_item_reqt_4->SelectedIndex;
		}
	}
	private: System::Void cb_item_reqt_5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			this->NPCEdit->npcs[id].reqItem[4].isNotItemList = this->cb_item_reqt_5->SelectedIndex;
		}
	}
	private: System::Void cb_item_reqt_6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			this->NPCEdit->npcs[id].reqItem[5].isNotItemList = this->cb_item_reqt_6->SelectedIndex;
		}
	}
	private: System::Void cb_item_reqt_7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			this->NPCEdit->npcs[id].reqItem[6].isNotItemList = this->cb_item_reqt_7->SelectedIndex;
		}
	}
	private: System::Void cb_item_reqt_8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_NPC->SelectedIndex;
		if (id >= 0 && id < 100) {
			this->NPCEdit->npcs[id].reqItem[7].isNotItemList = this->cb_item_reqt_8->SelectedIndex;
		}
	}

	// Edito os Valores dos Itens Agora
	private: System::Void list_Item_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		displayItemSelect();
	}
	private: System::Void tb_Item_strdef_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_strdef->Text, valor)) {
			this->NPCEdit->Req[id].Strdef = valor;
		}
	}
	private: System::Void tb_Item_amount_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_amount->Text, valor)) {
			this->NPCEdit->Req[id].Amount = valor;
		}
	}
	private: System::Void tb_Item_ItemID_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_ItemID->Text, valor)) {
			this->NPCEdit->Req[id].item.Index = valor;
		}
	}
	private: System::Void tb_Item_ItemID_Leave(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100) {
			this->list_Item->Items[id] = "#Item_" + id + " [Item: " + this->NPCEdit->Req[id].item.Index + "]";
		}
	}
	private: System::Void tb_Item_ef1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_ef1->Text, valor)) {
			this->NPCEdit->Req[id].item.EF1 = valor;
		}
	}
	private: System::Void tb_Item_efv1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_efv1->Text, valor)) {
			this->NPCEdit->Req[id].item.EFV1 = valor;
		}
	}
	private: System::Void tb_Item_ef2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_ef2->Text, valor)) {
			this->NPCEdit->Req[id].item.EF2 = valor;
		}
	}
	private: System::Void tb_Item_efv2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_efv2->Text, valor)) {
			this->NPCEdit->Req[id].item.EFV2 = valor;
		}
	}
	private: System::Void tb_Item_ef3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_ef3->Text, valor)) {
			this->NPCEdit->Req[id].item.EF3 = valor;
		}
	}
	private: System::Void tb_Item_efv3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_efv3->Text, valor)) {
			this->NPCEdit->Req[id].item.EFV3 = valor;
		}
	}
	private: System::Void tb_Item_Req_min1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_Req_min1->Text, valor)) {
			this->NPCEdit->Req[id].Interval[0].MinID = valor;
		}
	}
	private: System::Void tb_Item_Req_max1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_Req_max1->Text, valor)) {
			this->NPCEdit->Req[id].Interval[0].MaxID = valor;
		}
	}
	private: System::Void tb_Item_Req_min2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_Req_min2->Text, valor)) {
			this->NPCEdit->Req[id].Interval[1].MinID = valor;
		}
	}
	private: System::Void tb_Item_Req_max2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_Req_max2->Text, valor)) {
			this->NPCEdit->Req[id].Interval[1].MaxID = valor;
		}
	}
	private: System::Void tb_Item_Req_min3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_Req_min3->Text, valor)) {
			this->NPCEdit->Req[id].Interval[2].MinID = valor;
		}
	}
	private: System::Void tb_Item_Req_max3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int id = this->list_Item->SelectedIndex;
		int valor = 0;
		if (id >= 0 && id < 100 && int::TryParse(this->tb_Item_Req_max3->Text, valor)) {
			this->NPCEdit->Req[id].Interval[2].MaxID = valor;
		}
	}
};
}
