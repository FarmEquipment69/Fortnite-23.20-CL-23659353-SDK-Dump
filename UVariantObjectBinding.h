// Class /Script/VariantManagerContent.VariantObjectBinding
// Size: 0x90
class UVariantObjectBinding : public UObject
{
	struct FString CachedActorLabel; // 0x28 (0x10)
	struct FSoftObjectPath ObjectPtr; // 0x38 (0x18)
	struct TLazyObjectPtr<class UObject> LazyObjectPtr; // 0x50 (0x1c)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct TArray<class UPropertyValue*> CapturedProperties; // 0x70 (0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x80 (0x10)
};

