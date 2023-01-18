// ScriptStruct /Script/Engine.EdGraphTerminalType
// Size: 0x14
struct FEdGraphTerminalType
{
	struct FName TerminalCategory; // 0x0 (0x4)
	struct FName TerminalSubCategory; // 0x4 (0x4)
	struct TWeakObjectPtr<class UObject> TerminalSubCategoryObject; // 0x8 (0x8)
	bool bTerminalIsConst; // 0x10 (0x1)
	bool bTerminalIsWeakPointer; // 0x11 (0x1)
	bool bTerminalIsUObjectWrapper; // 0x12 (0x1)
	unsigned char padding_13[0x1]; // 0x13 (0x1)
};

