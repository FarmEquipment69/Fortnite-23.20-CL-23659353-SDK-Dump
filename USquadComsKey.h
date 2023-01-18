// Class /Script/FortniteUI.SquadComsKey
// Size: 0x2d8
class USquadComsKey : public UFortHUDElementWidget
{
	unsigned char unreflected_2d8[0x2d8]; 

	/* Functions */

	// Function /Script/FortniteUI.SquadComsKey.HandleOnNPCUnconvertEvent (Underlying native function: HandleOnNPCUnconvertEvent 0xa531318)
	void HandleOnNPCUnconvertEvent(class AFortPawn*& UnconvertedFortPawn, enum EUnconvertReason& UnconvertReason); // (Final | Native | Private)

	// Function /Script/FortniteUI.SquadComsKey.HandleOnNPCConvertEvent (Underlying native function: HandleOnNPCConvertEvent 0xa5310ec)
	void HandleOnNPCConvertEvent(class AFortPawn*& ConvertedFortPawn); // (Final | Native | Private)

	// Function /Script/FortniteUI.SquadComsKey.HandleBindNPCConvertEvent (Underlying native function: HandleBindNPCConvertEvent 0xa530998)
	void HandleBindNPCConvertEvent(class AFortPlayerController*& PlayerController, class AActor*& OldViewTarget, class AActor*& NewViewTarget); // (Final | Native | Private)
};

