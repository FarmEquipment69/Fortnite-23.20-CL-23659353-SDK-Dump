// Class /Script/FortniteAI.FortAthenaBTTask_Zipline
// Size: 0x80
class UFortAthenaBTTask_Zipline : public UBTTaskNode
{
	struct FName UsageExecutionStatusName; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct FName ZiplineTargetName; // 0x78 (0x4)
	unsigned char unreflected_7c[0x2]; // 0x7c (0x2) 
	bool bExitZiplineOnTaskFinished; // 0x7e (0x1)
	unsigned char padding_7f[0x1]; // 0x7f (0x1)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaBTTask_Zipline.OnZiplineStateChanged (Underlying native function: OnZiplineStateChanged 0x6156eb0)
	void OnZiplineStateChanged(bool& bIsZiplining, class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Public)
};

