// TestGraphViz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CGraphVizProcessor.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CGraphVizProcessor *pGraphVizProcessor = new CGraphVizProcessor();
	pGraphVizProcessor->AddNode(0, "Test", "Disasm lines", "black", "red", "12");

	list<DrawingInfo *> *DrawingInfoMap;
	DrawingInfoMap = pGraphVizProcessor->GetDrawingInfo();
	return 0;
}

