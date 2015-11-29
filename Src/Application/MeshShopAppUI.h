#pragma once
#include "MyGUI.h"

namespace MagicApp
{
    class MeshShopAppUI
    {
    public:
        MeshShopAppUI();
        ~MeshShopAppUI();

        void Setup();
        void Shutdown();

    private:
        void ImportMesh(MyGUI::Widget* pSender);
        void ExportMesh(MyGUI::Widget* pSender);
        void ConsolidateMesh(MyGUI::Widget* pSender);
        void ConsolidateTopology(MyGUI::Widget* pSender);
		void ConsolidateGeometry(MyGUI::Widget* pSender);
        void ReverseDirection(MyGUI::Widget* pSender);
		void FilterMesh(MyGUI::Widget* pSender);
        void SmoothMesh(MyGUI::Widget* pSender);
        void EnhanceMeshDetail(MyGUI::Widget* pSender);
        void SubdivideMesh(MyGUI::Widget* pSender);
        void RefineMesh(MyGUI::Widget* pSender);
        void DoRefineMesh(MyGUI::Widget* pSender);
        void SimplifyMesh(MyGUI::Widget* pSender);
        void DoSimplifyMesh(MyGUI::Widget* pSender);
        void SampleMesh(MyGUI::Widget* pSender);
        void BackToHomepage(MyGUI::Widget* pSender);
        void Contact(MyGUI::Widget* pSender);

    private:
        MyGUI::VectorWidgetPtr mRoot;
    };
}
