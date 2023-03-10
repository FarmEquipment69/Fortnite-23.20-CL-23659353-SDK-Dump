// ScriptStruct /Script/LiveEditObject.LiveEditObjectTestStruct
// Size: 0x148
struct FLiveEditObjectTestStruct
{
	bool bool; // 0x0 (0x1)
	int8_t Int8; // 0x1 (0x1)
	int16_t Int16; // 0x2 (0x2)
	int int32; // 0x4 (0x4)
	int64_t Int64; // 0x8 (0x8)
	float float; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	double Double; // 0x18 (0x8)
	struct FString String; // 0x20 (0x10)
	struct FText Text; // 0x30 (0x18)
	struct FName Name; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	class UObject* RawObjectPtr; // 0x50 (0x8)
	class UObject* ObjectPtr; // 0x58 (0x8)
	struct FSoftObjectPath SoftObjectPath; // 0x60 (0x18)
	struct FVector2D Struct; // 0x78 (0x10)
	int FixedArray[0x4]; // 0x88 (0x4) (ARRAY) 
	struct TArray<int> DynamicArray; // 0x98 (0x10)
	struct TSet<int> Set; // 0xa8 (0x50)
	struct TMap<int, int> Map; // 0xf8 (0x50)
};

