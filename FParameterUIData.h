// ScriptStruct /Script/CustomizableObject.ParameterUIData
// Size: 0x178
struct FParameterUIData
{
	struct FString Name; // 0x0 (0x10)
	struct FMutableParamUIMetadata ParamUIMetadata; // 0x10 (0xf8)
	enum EMutableParameterType Type; // 0x108 (0x1)
	unsigned char unreflected_109[0x7]; // 0x109 (0x7) 
	struct TArray<struct FIntegerParameterUIData> ArrayIntegerParameterOption; // 0x110 (0x10)
	enum ECustomizableObjectGroupType IntegerParameterGroupType; // 0x120 (0x1)
	bool bDontCompressRuntimeTextures; // 0x121 (0x1)
	unsigned char unreflected_122[0x6]; // 0x122 (0x6) 
	struct TMap<struct FString, struct FString> ForcedParameterValues; // 0x128 (0x50)
};

