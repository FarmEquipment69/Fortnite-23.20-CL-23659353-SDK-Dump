// Class /Script/FortniteGame.ARDronePawn
// Size: 0x550
class AARDronePawn : public AHoverDronePawn
{
	class USceneComponent* ARRoot; // 0x438 (0x8)
	class USceneComponent* WebcamRoot; // 0x440 (0x8)
	class USceneComponent* WebcamRotRoot; // 0x448 (0x8)
	class USceneComponent* ScreenRoot; // 0x450 (0x8)
	class USceneComponent* MotionBase; // 0x458 (0x8)
	class UMotionControllerComponent* MotionController; // 0x460 (0x8)
	class USceneCaptureComponent2D* POVCaptureComponent; // 0x468 (0x8)
	class UARScreenCaptureComponent* ScreenCaptureComponent; // 0x470 (0x8)
	class USceneCaptureComponent2D* ARCapture; // 0x478 (0x8)
	class UMediaPlayer* MediaPlayer; // 0x480 (0x8)
	int MediaPlayerVideoFormatIndex; // 0x488 (0x4)
	float WorldToMetersMultiplier; // 0x48c (0x4)
	class UMaterialInterface* ARPostProcessMaterial; // 0x490 (0x8)
	class UMaterialInstanceDynamic* ARPostProcessMID; // 0x498 (0x8)
	unsigned char padding_4a0[0xb0]; // 0x4a0 (0xb0)

	/* Functions */

	// Function /Script/FortniteGame.ARDronePawn.StopScaling (Underlying native function: StopScaling 0x8e822dc)
	void StopScaling(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.ARDronePawn.ScaleOut (Underlying native function: ScaleOut 0x8e80f84)
	void ScaleOut(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.ARDronePawn.ScaleIn (Underlying native function: ScaleIn 0x8e80f6c)
	void ScaleIn(); // (Final | Native | Protected)
};

