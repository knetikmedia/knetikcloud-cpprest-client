/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Gamification_MetricsApi.h
 *
 * 
 */

#ifndef Gamification_MetricsApi_H_
#define Gamification_MetricsApi_H_


#include "ApiClient.h"

#include "MetricResource.h"
#include "Result.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Gamification_MetricsApi
{
public:
    Gamification_MetricsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Gamification_MetricsApi();
    /// <summary>
    /// Add a metric
    /// </summary>
    /// <remarks>
    /// Post a new score/stat for an activity occurrence without ending the occurrence itself
    /// </remarks>
    /// <param name="metric">The new metric (optional)</param>
    pplx::task<void> addMetric(std::shared_ptr<MetricResource> metric);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Gamification_MetricsApi_H_ */

