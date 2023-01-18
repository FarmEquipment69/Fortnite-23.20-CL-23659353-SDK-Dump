// ScriptStruct /Script/Engine.EdGraphPinType
// Size: 0x48
struct FEdGraphPinType
{
	struct FName PinCategory; // 0x0 (0x4)
	struct FName PinSubCategory; // 0x4 (0x4)
	struct TWeakObjectPtr<class UObject> PinSubCategoryObject; // 0x8 (0x8)
	struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x10 (0x20)
	struct FEdGraphTerminalType PinValueType; // 0x30 (0x14)
	enum EPinContainerType ContainerType; // 0x44 (0x1)
	unsigned char bIsArray; // 0x45 (0x1)
	unsigned char bIsReference; // 0x45 (0x1)
	unsigned char bIsConst; // 0x45 (0x1)
	unsigned char bIsWeakPointer; // 0x45 (0x1)
	unsigned char bIsUObjectWrapper; // 0x45 (0x1)
	unsigned char bSerializeAsSinglePrecisionFloat; // 0x45 (0x1)
	unsigned char padding_46[0x2]; // 0x46 (0x2)
};

