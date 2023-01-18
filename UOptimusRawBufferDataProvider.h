// Class /Script/OptimusCore.OptimusRawBufferDataProvider
// Size: 0x80
class UOptimusRawBufferDataProvider : public UComputeDataProvider
{
	struct TWeakObjectPtr<class UActorComponent> Component; // 0x28 (0x8)
	struct TWeakObjectPtr<class UOptimusComponentSource> ComponentSource; // 0x30 (0x8)
	struct FOptimusDataDomain DataDomain; // 0x38 (0x40)
	int ElementStride; // 0x78 (0x4)
	int RawStride; // 0x7c (0x4)
};

