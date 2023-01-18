// Class /Script/CompanionAI.PingComponentBase
// Size: 0x98
class UPingComponentBase : public UEntityEnableableComponent
{
	unsigned char unreflected_80[0x10]; // 0x80 (0x10) 
	class UFortPawnComponent_AIBotPingCommand* CachedAIBotPingCommand; // 0x90 (0x8)

	/* Functions */

	// Function /Script/CompanionAI.PingComponentBase.HandleOnNPCUnconvertedEvent (Underlying native function: HandleOnNPCUnconvertedEvent 0x7212b04)
	void HandleOnNPCUnconvertedEvent(class AFortPawn*& UnconvertedFortPawn, enum EUnconvertReason& UnconvertReason); // (Final | Native | Private)

	// Function /Script/CompanionAI.PingComponentBase.HandleOnNPCConvertedEvent (Underlying native function: HandleOnNPCConvertedEvent 0x7212a44)
	void HandleOnNPCConvertedEvent(class AFortPawn*& InstigatorPawn, class AFortPawn*& ConvertedPawn); // (Final | Native | Private)
};

