// Class /Script/FortniteGame.MetricConfiguration_Legacy
// Size: 0xd0
class UMetricConfiguration_Legacy : public UObject
{
	struct TArray<struct TWeakObjectPtr<class UClass>> CategoryClasses; // 0x28 (0x10)
	struct TArray<struct FVersionedMetricWrapper> MetricClasses; // 0x38 (0x10)
	struct TArray<class UObjectMetric_Legacy*> Metrics; // 0x48 (0x10)
	struct TMap<enum EFortBudgetCategory, class UCategoryMetric*> CategoryToMetric; // 0x58 (0x50)
	struct TArray<class UCategoryMetric*> CategoryMetrics; // 0xa8 (0x10)
	unsigned char padding_b8[0x18]; // 0xb8 (0x18)
};

