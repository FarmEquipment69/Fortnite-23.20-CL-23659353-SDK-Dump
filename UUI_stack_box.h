// VerseClass /VerseUI/_Verse/VNI/VerseUI.UI_stack_box
// Size: 0xd0
class UUI_stack_box : public UUI_widget
{
	unsigned char unreflected_98[0x20]; // 0x98 (0x20) 
	struct TArray<struct FUI_stack_box_slot> verse0x5AE077E0Slots; // 0xb8 (0x10)
	enum UI_orientation verse0x4DFAB8C8Orientation; // 0xc8 (0x1)
	unsigned char verse0xB044A531L2fEpicGames2ecom2fTemporary2fUI2fstackboxNRAddWidgetLNstackboxslotR_98[0x10]; // 0x98 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char verse0x9CEE338EL2fEpicGames2ecom2fTemporary2fUI2fstackboxNRRemoveWidgetLNwidgetR_a8[0x10]; // 0xa8 (0x10) (UNHANDLED PROPERTY TYPE: VerseFunctionProperty UID: 0)
	unsigned char padding_b8[0x18]; // 0xb8 (0x18)

	/* Functions */

	// Function /VerseUI/_Verse/VNI/VerseUI.UI_stack_box._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R (Underlying native function: _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R 0x70b331c)
	void L2fEpicGames2ecom2fTemporary2fUI2fstackboxNRRemoveWidgetLNwidgetR(class UUI_widget*& verse0xB2CDDD72Argument); // (Native | Public | BlueprintCallable)

	// Function /VerseUI/_Verse/VNI/VerseUI.UI_stack_box._L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R (Underlying native function: _L_2fEpicGames_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R 0x70b3314)
	void L2fEpicGames2ecom2fTemporary2fUI2fstackboxNRAddWidgetLNstackboxslotR(struct FUI_stack_box_slot& verse0xB2CDDD72Argument); // (Native | Public | BlueprintCallable)

	// Function /VerseUI/_Verse/VNI/VerseUI.UI_stack_box.$InitInstance (Has no native function)
	void $InitInstance(); // ()

	// Function /VerseUI/_Verse/VNI/VerseUI.UI_stack_box.$Block (Has no native function)
	void $Block(); // ()

	// Function /VerseUI/_Verse/VNI/VerseUI.UI_stack_box.$InitCDO (Has no native function)
	void $InitCDO(struct TArray<struct FUI_stack_box_slot>& $ExprResult0, struct TArray<enum EVerseFalse>& verse0xFFC68BC5Array1, struct TArray<struct FUI_stack_box_slot>& $ForResult1, int64_t& $ForIndex2, int64_t& $ForLength3, enum EVerseFalse& verse0xFB88B569Item3, unsigned char& $ExprResult4); // (HasDefaults)
};

