// Class /Script/Engine.SkeletalMeshSocket
// Size: 0x80
class USkeletalMeshSocket : public UObject
{
	struct FName SocketName; // 0x28 (0x4)
	struct FName BoneName; // 0x2c (0x4)
	struct FVector RelativeLocation; // 0x30 (0x18)
	struct FRotator RelativeRotation; // 0x48 (0x18)
	struct FVector RelativeScale; // 0x60 (0x18)
	bool bForceAlwaysAnimated; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)

	/* Functions */

	// Function /Script/Engine.SkeletalMeshSocket.InitializeSocketFromLocation (Underlying native function: InitializeSocketFromLocation 0x9c1bbc8)
	void InitializeSocketFromLocation(class USkeletalMeshComponent*& SkelComp, struct FVector& WorldLocation, struct FVector& WorldNormal); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkeletalMeshSocket.GetSocketLocation (Underlying native function: GetSocketLocation 0x9c1b9f8)
	struct FVector GetSocketLocation(class USkeletalMeshComponent*& SkelComp); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

