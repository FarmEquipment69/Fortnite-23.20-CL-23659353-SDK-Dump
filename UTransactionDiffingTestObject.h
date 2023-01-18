// Class /Script/Engine.TransactionDiffingTestObject
// Size: 0x98
class UTransactionDiffingTestObject : public UObject
{
	struct TArray<struct FName> NamesArray; // 0x28 (0x10)
	struct FName AdditionalName; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<class UObject*> ObjectsArray; // 0x40 (0x10)
	class UObject* AdditionalObject; // 0x50 (0x8)
	struct TArray<struct TWeakObjectPtr<class UObject>> SoftObjectsArray; // 0x58 (0x10)
	struct TWeakObjectPtr<class UObject> AdditionalSoftObject; // 0x68 (0x28)
	int PropertyData; // 0x90 (0x4)
	unsigned char padding_94[0x4]; // 0x94 (0x4)
};

