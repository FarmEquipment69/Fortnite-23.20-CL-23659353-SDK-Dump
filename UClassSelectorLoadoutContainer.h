// Class /Script/CRD_ClassSelectorUI.ClassSelectorLoadoutContainer
// Size: 0x2d8
class UClassSelectorLoadoutContainer : public UCommonUserWidget
{
	class UWrapBox* WrapBox; // 0x290 (0x8)
	class UClass* EntryWidgetClass; // 0x298 (0x8)
	struct TArray<class UAthenaItemElementWidgetBase*> EntryWidgets; // 0x2a0 (0x10)
	class UFortItemDefinition* PreviewItemDef; // 0x2b0 (0x8)
	int NumPreviewEntries; // 0x2b8 (0x4)
	unsigned char padding_2bc[0x1c]; // 0x2bc (0x1c)
};

