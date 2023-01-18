// Class /Script/Constraints.TransformableComponentHandle
// Size: 0x68
class UTransformableComponentHandle : public UTransformableHandle
{
	struct TWeakObjectPtr<class USceneComponent> Component; // 0x58 (0x8)
	struct FName SocketName; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

