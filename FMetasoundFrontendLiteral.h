// ScriptStruct /Script/MetasoundFrontend.MetasoundFrontendLiteral
// Size: 0x58
struct FMetasoundFrontendLiteral
{
	enum EMetasoundFrontendLiteralType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int AsNumDefault; // 0x4 (0x4)
	struct TArray<bool> AsBoolean; // 0x8 (0x10)
	struct TArray<int> AsInteger; // 0x18 (0x10)
	struct TArray<float> AsFloat; // 0x28 (0x10)
	struct TArray<struct FString> AsString; // 0x38 (0x10)
	struct TArray<class UObject*> AsUObject; // 0x48 (0x10)
};

