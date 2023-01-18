// Class /Script/AugmentedReality.ARTrackedPose
// Size: 0x1b0
class UARTrackedPose : public UARTrackedGeometry
{
	struct FARPose3D TrackedPose; // 0x158 (0x50)
	unsigned char padding_1a8[0x8]; // 0x1a8 (0x8)

	/* Functions */

	// Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData (Underlying native function: GetTrackedPoseData 0x97bc9b8)
	struct FARPose3D GetTrackedPoseData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

