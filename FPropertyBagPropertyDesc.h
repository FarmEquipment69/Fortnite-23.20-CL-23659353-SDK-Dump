// ScriptStruct /Script/StructUtils.PropertyBagPropertyDesc
// Size: 0x28
struct FPropertyBagPropertyDesc
{
	class UObject* ValueTypeObject; // 0x0 (0x8)
	struct FGuid ID; // 0x8 (0x10)
	struct FName Name; // 0x18 (0x4)
	enum EPropertyBagPropertyType ValueType; // 0x1c (0x1)
	enum EPropertyBagContainerType ContainerType; // 0x1d (0x1)
	unsigned char padding_1e[0xa]; // 0x1e (0xa)
};

