#pragma once
#pragma comment( lib, "BakkesMod.lib" )
#include "bakkesmod/plugin/bakkesmodplugin.h"
#include "GameStateNode.h"


class AuroraGSI : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	virtual void onLoad();
	virtual void onUnload();

private:
#pragma region Fields
	GameStateNode GameState;
#pragma endregion

#pragma region Aurora
	void StartLoop();
	void SendToAurora(std::string);
	ServerWrapper GetCurrentGameType();
	MatchMode GetCurrentGameMode(int playlistId);
#pragma endregion

#pragma region Update States
	bool UpdateMatchState();
	void UpdateState(ServerWrapper wrapper);
	void ResetStates();
#pragma endregion
};