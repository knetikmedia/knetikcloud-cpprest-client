/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * GamificationMetricsApi.h
 *
 * 
 */

#ifndef GamificationMetricsApi_H_
#define GamificationMetricsApi_H_


#include "ApiClient.h"

#include "MetricResource.h"
#include "Result.h"

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  GamificationMetricsApi
{
public:
    GamificationMetricsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~GamificationMetricsApi();
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

#endif /* GamificationMetricsApi_H_ */

