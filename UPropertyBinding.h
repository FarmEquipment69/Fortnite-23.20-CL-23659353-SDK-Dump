// Class /Script/UMG.PropertyBinding
// Size: 0x70
class UPropertyBinding : public UObject
{
	struct TWeakObjectPtr<class UObject> SourceObject; // 0x28 (0x8)
	struct FDynamicPropertyPath SourcePath; // 0x30 (0x38)
	struct FName DestinationProperty; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

