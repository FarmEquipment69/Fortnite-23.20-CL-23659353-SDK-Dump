// Class /Script/OptimusCore.OptimusComponentSourceBinding
// Size: 0x50
class UOptimusComponentSourceBinding : public UObject
{
	struct FName BindingName; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class UClass* ComponentType; // 0x30 (0x8)
	struct TArray<struct FName> ComponentTags; // 0x38 (0x10)
	bool bIsPrimaryBinding; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

