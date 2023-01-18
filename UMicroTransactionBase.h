// Class /Script/Engine.MicroTransactionBase
// Size: 0x68
class UMicroTransactionBase : public UPlatformInterfaceBase
{
	struct TArray<struct FPurchaseInfo> AvailableProducts; // 0x38 (0x10)
	struct FString LastError; // 0x48 (0x10)
	struct FString LastErrorSolution; // 0x58 (0x10)
};

