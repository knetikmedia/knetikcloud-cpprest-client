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


#include "Amazon_Web_Services_S3Api.h"
#include "IHttpBody.h"
#include "JsonBody.h"
#include "MultipartFormData.h"

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

Amazon_Web_Services_S3Api::Amazon_Web_Services_S3Api( std::shared_ptr<ApiClient> apiClient )
    : m_ApiClient(apiClient)
{
}

Amazon_Web_Services_S3Api::~Amazon_Web_Services_S3Api()
{
}

pplx::task<utility::string_t> Amazon_Web_Services_S3Api::getDownloadURL(utility::string_t bucket, utility::string_t path, int32_t expiration)
{


    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = U("/amazon/s3/downloadurl");
    
    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( U("application/json") );

    utility::string_t responseHttpContentType;

    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 )
    {
        responseHttpContentType = U("text/plain");
    }
    // JSON
    else if ( responseHttpContentTypes.find(U("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("application/json");
    }
    // multipart formdata
    else if( responseHttpContentTypes.find(U("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("multipart/form-data");
    }
    // plain text
    else if( responseHttpContentTypes.find(U("text/plain")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("text/plain");
    }
    else
    {
        throw ApiException(400, U("Amazon_Web_Services_S3Api->getDownloadURL does not produce any supported media type"));
    }

    headerParams[U("Accept")] = responseHttpContentType;

    std::unordered_set<utility::string_t> consumeHttpContentTypes;

    
    {
        queryParams[U("bucket")] = ApiClient::parameterToString(bucket);
    }
    
    {
        queryParams[U("path")] = ApiClient::parameterToString(path);
    }
    
    {
        queryParams[U("expiration")] = ApiClient::parameterToString(expiration);
    }

    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;

    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(U("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("application/json");
    }
    // multipart formdata
    else if( consumeHttpContentTypes.find(U("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("multipart/form-data");
    }
    else
    {
        throw ApiException(415, U("Amazon_Web_Services_S3Api->getDownloadURL does not consume any supported media type"));
    }

    //Set the request content type in the header.
    headerParams[U("Content-Type")] = requestHttpContentType;

    // authentication (oauth2_client_credentials_grant) required
    // oauth2 authentication is added automatically as part of the http_client_config
    // authentication (oauth2_password_grant) required
    // oauth2 authentication is added automatically as part of the http_client_config

    return m_ApiClient->callApi(path, U("GET"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (response.status_code() >= 400)
        {
            throw ApiException(response.status_code()
                , U("error calling getDownloadURL: ") + response.reason_phrase()
                , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
        }

        // check response content type
        if(response.headers().has(U("Content-Type")))
        {
            utility::string_t contentType = response.headers()[U("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , U("error calling getDownloadURL: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }

        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        utility::string_t result(U(""));

        if(responseHttpContentType == U("application/json"))
        {
            web::json::value json = web::json::value::parse(response);

            result = ModelBase::stringFromJson(json);
            
        }
        else if(responseHttpContentType == U("text/plain"))
        {
            result = response;
        }
        // else if(responseHttpContentType == U("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , U("error calling getDownloadURL: unsupported response type"));
        }

        return result;
    });
}
pplx::task<std::shared_ptr<AmazonS3Activity>> Amazon_Web_Services_S3Api::getSignedS3URL(utility::string_t filename, utility::string_t contentType)
{


    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = U("/amazon/s3/signedposturl");
    
    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( U("application/json") );

    utility::string_t responseHttpContentType;

    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 )
    {
        responseHttpContentType = U("application/json");
    }
    // JSON
    else if ( responseHttpContentTypes.find(U("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("application/json");
    }
    // multipart formdata
    else if( responseHttpContentTypes.find(U("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("multipart/form-data");
    }
    else
    {
        throw ApiException(400, U("Amazon_Web_Services_S3Api->getSignedS3URL does not produce any supported media type"));
    }

    headerParams[U("Accept")] = responseHttpContentType;

    std::unordered_set<utility::string_t> consumeHttpContentTypes;

    
    {
        queryParams[U("filename")] = ApiClient::parameterToString(filename);
    }
    
    {
        queryParams[U("content_type")] = ApiClient::parameterToString(contentType);
    }

    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;

    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(U("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("application/json");
    }
    // multipart formdata
    else if( consumeHttpContentTypes.find(U("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("multipart/form-data");
    }
    else
    {
        throw ApiException(415, U("Amazon_Web_Services_S3Api->getSignedS3URL does not consume any supported media type"));
    }

    //Set the request content type in the header.
    headerParams[U("Content-Type")] = requestHttpContentType;

    // authentication (oauth2_client_credentials_grant) required
    // oauth2 authentication is added automatically as part of the http_client_config
    // authentication (oauth2_password_grant) required
    // oauth2 authentication is added automatically as part of the http_client_config

    return m_ApiClient->callApi(path, U("GET"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (response.status_code() >= 400)
        {
            throw ApiException(response.status_code()
                , U("error calling getSignedS3URL: ") + response.reason_phrase()
                , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
        }

        // check response content type
        if(response.headers().has(U("Content-Type")))
        {
            utility::string_t contentType = response.headers()[U("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , U("error calling getSignedS3URL: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }

        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        std::shared_ptr<AmazonS3Activity> result(new AmazonS3Activity());

        if(responseHttpContentType == U("application/json"))
        {
            web::json::value json = web::json::value::parse(response);

            result->fromJson(json);
        }
        // else if(responseHttpContentType == U("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , U("error calling getSignedS3URL: unsupported response type"));
        }

        return result;
    });
}

}
}
}
}
