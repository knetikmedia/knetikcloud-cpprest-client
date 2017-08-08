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
 * AmazonWebServicesS3Api.h
 *
 * 
 */

#ifndef AmazonWebServicesS3Api_H_
#define AmazonWebServicesS3Api_H_


#include "ApiClient.h"

#include "AmazonS3Activity.h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  AmazonWebServicesS3Api
{
public:
    AmazonWebServicesS3Api( std::shared_ptr<ApiClient> apiClient );
    virtual ~AmazonWebServicesS3Api();
    /// <summary>
    /// Get a signed S3 URL
    /// </summary>
    /// <remarks>
    /// Requires the file name and file content type (i.e., &#39;video/mpeg&#39;)
    /// </remarks>
    /// <param name="filename">The file name (optional)</param>/// <param name="contentType">The content type (optional)</param>
    pplx::task<std::shared_ptr<AmazonS3Activity>> getSignedS3URL(utility::string_t filename, utility::string_t contentType);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* AmazonWebServicesS3Api_H_ */

