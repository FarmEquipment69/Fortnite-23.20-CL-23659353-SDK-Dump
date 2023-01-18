// ScriptStruct /Script/FortniteGame.TemplateOption
// Size: 0x30
struct FTemplateOption
{
	struct FName OptionKey; // 0x0 (0x4)
	bool bShouldMatchPreviousOption; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	class UScriptStruct* StructType; // 0x8 (0x8)
	struct TArray<struct FTemplateOptionValue> OptionValues; // 0x10 (0x10)
	struct TArray<struct FTemplateOptionValue> SortedOptionValues; // 0x20 (0x10)
};

