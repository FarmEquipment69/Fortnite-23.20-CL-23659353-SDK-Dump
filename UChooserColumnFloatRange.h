// Class /Script/Chooser.ChooserColumnFloatRange
// Size: 0x58
class UChooserColumnFloatRange : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FName DisplayName; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TScriptInterface<class IDataInterface> Value; // 0x38 (0x10)
	struct TArray<struct FChooserFloatRangeRowData*> RowValues; // 0x48 (0x10)
};

