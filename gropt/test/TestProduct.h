#ifndef TESTPRODUCT_H
#define TESTPRODUCT_H

#include "ForDebug.h"
#include <iostream>
#include "randgen.h"
#include "Manifold.h"
#include "Problem.h"
#include "SolversLS.h"
#include <ctime>

#include "EucVariable.h"
#include "EucVector.h"
#include "EucFrechetMean.h"
#include "EucQuadratic.h"

#include "StieBrockett.h"
#include "StieVector.h"
#include "StieVariable.h"
#include "Stiefel.h"

#include "RSD.h"
#include "RNewton.h"
#include "RCG.h"
#include "RBroydenFamily.h"
#include "RWRBFGS.h"
#include "RBFGS.h"
#include "LRBFGS.h"

#include "SolversTR.h"
#include "RTRSD.h"
#include "RTRNewton.h"
#include "RTRSR1.h"
#include "LRTRSR1.h"

#include "def.h"

#include <StieVariable.h>
#include <EucVariable.h>
#include <ProductElement.h>
#include <ProductManifold.h>

#include <L2Sphere.h>
#include <L2SphereVariable.h>
#include <L2SphereVector.h>

#include <Oblique.h>
#include <ObliqueVariable.h>
#include <ObliqueVector.h>

void testProduct(void);

#endif // end of TESTPRODUCT_H
